/**
 * @file can_bus_health_monitor.cpp
 * @author Gandla Bhargavi
 * @brief Automotive CAN bus communication health monitoring
 * @date 17-10-2026
 */

#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <memory>
#include <iomanip>

using namespace std;

// Expected CAN message configuration
struct MessageConfig {
    string name;
    unsigned int canId;
    int expectedPayloadLength;
    int timeoutMs;
};

// Received CAN message
struct CANMessage {
    unsigned int canId;
    int timestampMs;
    int payloadLength;
};

// Message monitoring state
struct MessageState {
    int lastReceivedMs = -1;
    int faultCount = 0;
    bool timedOut = false;
};

// Abstract base class
class CANMonitor {
public:
    virtual void processData() = 0;

    virtual ~CANMonitor() = default;
};

// Derived class
class CANBusHealthMonitor : public CANMonitor {
private:
    vector<MessageConfig> configurations;
    vector<CANMessage> incomingMessages;

    unordered_map<unsigned int, MessageState> messageStates;

    int unknownIdCount = 0;
    int invalidLengthCount = 0;

public:
    CANBusHealthMonitor(
        const vector<MessageConfig>& configs,
        const vector<CANMessage>& messages
    )
        : configurations(configs),
          incomingMessages(messages) {

        for (const auto& config : configurations) {
            messageStates[config.canId] = MessageState{};
        }
    }

    // Find configuration for a CAN identifier
    const MessageConfig* findConfig(unsigned int canId) const {
        for (const auto& config : configurations) {
            if (config.canId == canId) {
                return &config;
            }
        }

        return nullptr;
    }

    // Process an incoming CAN message
    void receiveMessage(const CANMessage& message) {
        const MessageConfig* config = findConfig(message.canId);

        if (config == nullptr) {
            cout << "[UNKNOWN ID] CAN ID 0x"
                 << hex << uppercase << message.canId
                 << dec << " at "
                 << message.timestampMs << " ms\n";

            unknownIdCount++;
            return;
        }

        if (message.payloadLength != config->expectedPayloadLength) {
            cout << "[INVALID LENGTH] " << config->name
                 << " expected "
                 << config->expectedPayloadLength
                 << " bytes, received "
                 << message.payloadLength << " bytes\n";

            invalidLengthCount++;
            return;
        }

        MessageState& state = messageStates.at(message.canId);

        if (state.timedOut) {
            cout << "[RECOVERED] " << config->name
                 << " received at "
                 << message.timestampMs << " ms\n";
        }

        state.lastReceivedMs = message.timestampMs;
        state.timedOut = false;
    }

    // Detect messages that exceed their timeout limits
    void checkTimeouts(int currentTimeMs) {
        for (const auto& config : configurations) {
            MessageState& state = messageStates.at(config.canId);

            int referenceTime = state.lastReceivedMs;

            // If no valid message has arrived yet, use time zero.
            if (referenceTime == -1) {
                referenceTime = 0;
            }

            int elapsed = currentTimeMs - referenceTime;

            if (elapsed > config.timeoutMs && !state.timedOut) {
                state.timedOut = true;
                state.faultCount++;

                cout << "[TIMEOUT] " << config.name
                     << " (CAN ID 0x"
                     << hex << uppercase << config.canId
                     << dec << ") - "
                     << elapsed << " ms since last valid message\n";
            }
        }
    }

    // Display final communication health
    void displaySummary() const {
        cout << "\nCAN BUS HEALTH SUMMARY\n";
        cout << "--------------------------------------------------\n";

        cout << left
             << setw(22) << "Message"
             << setw(14) << "CAN ID"
             << setw(14) << "Status"
             << "Fault Count\n";

        cout << "--------------------------------------------------\n";

        for (const auto& config : configurations) {
            const MessageState& state =
                messageStates.at(config.canId);

            cout << left
                 << setw(22) << config.name;

            cout << "0x"
                 << hex << uppercase << config.canId
                 << dec << "          ";

            cout << setw(14)
                 << (state.timedOut ? "TIMEOUT" : "HEALTHY")
                 << state.faultCount << "\n";
        }

        cout << "\nUnknown CAN IDs: " << unknownIdCount << "\n";
        cout << "Invalid payload lengths: "
             << invalidLengthCount << "\n";
    }

    void processData() override {
        cout << "AUTOMOTIVE CAN BUS HEALTH MONITOR\n";
        cout << "==================================================\n";

        size_t index = 0;

        // Simulated timeline: 0 to 300 ms.
        for (int currentTime = 0;
             currentTime <= 300;
             currentTime += 50) {

            // Process messages received at this timestamp.
            while (
                index < incomingMessages.size() &&
                incomingMessages[index].timestampMs == currentTime
            ) {
                receiveMessage(incomingMessages[index]);
                index++;
            }

            checkTimeouts(currentTime);
        }

        displaySummary();
    }
};

int main() {
    vector<MessageConfig> configs = {
        {"EngineSpeed",     0x100, 8, 100},
        {"VehicleSpeed",    0x200, 8, 150},
        {"BrakeStatus",     0x300, 1, 100}
    };

    vector<CANMessage> messages = {
        {0x100,   0, 8},
        {0x200,   0, 8},
        {0x300,   0, 1},

        {0x100,  50, 8},
        {0x300,  50, 1},

        {0x100, 100, 8},
        {0x200, 100, 6},  // Invalid payload length

        {0x555, 150, 8},  // Unknown CAN identifier

        {0x100, 150, 8},
        {0x100, 200, 8},
        {0x100, 250, 8},
        {0x100, 300, 8}
    };

    unique_ptr<CANMonitor> monitor =
        make_unique<CANBusHealthMonitor>(configs, messages);

    monitor->processData();

    return 0;
}