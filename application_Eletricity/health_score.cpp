#include <iostream>
#include <algorithm>
using namespace std;

/**
 * @brief Calculates the health score of electrical equipment.
 *
 * @param temperature Equipment temperature in Celsius.
 * @param load Equipment load percentage.
 * @param vibration Vibration level in mm/s.
 * @param hours Total operating hours.
 * @return Health score between 0 and 100.
 */
int calculateHealthScore(double temperature, double load,
                        double vibration, double hours)
{
    int penalty = 0;

    if (temperature > 70)
        penalty += 20;

    if (temperature > 85)
        penalty += 15;

    if (load > 80)
        penalty += 10;

    if (load > 100)
        penalty += 20;

    if (vibration > 4)
        penalty += 15;

    if (vibration > 7)
        penalty += 15;

    if (hours > 10000)
        penalty += 10;

    return max(0, 100 - penalty);
}

/**
 * @brief Classifies equipment condition using its health score.
 *
 * @param score Calculated health score.
 * @return Equipment condition.
 */
string classifyEquipment(int score)
{
    if (score >= 80)
        return "HEALTHY";
    else if (score >= 50)
        return "WARNING";
    else
        return "CRITICAL";
}

/**
 * @brief Main function of the equipment health monitoring system.
 */
int main()
{
    double temperature, load, vibration, hours;

    cout << "Electrical Equipment Health Score System\n";
    cout << "------------------------------------\n";

    cout << "Enter temperature (C): ";
    cin >> temperature;

    cout << "Enter load (%): ";
    cin >> load;

    cout << "Enter vibration (mm/s): ";
    cin >> vibration;

    cout << "Enter operating hours: ";
    cin >> hours;

    if (temperature < 0 || load < 0 ||
        vibration < 0 || hours < 0)
    {
        cout << "\nInvalid input. Values cannot be negative.\n";
        return 1;
    }

    int score = calculateHealthScore(
        temperature, load, vibration, hours);

    string status = classifyEquipment(score);

    cout << "\nHealth Score: " << score << "/100\n";
    cout << "Equipment Status: " << status << "\n";

    if (status == "HEALTHY")
        cout << "Recommendation: Continue normal monitoring.\n";
    else if (status == "WARNING")
        cout << "Recommendation: Schedule equipment inspection.\n";
    else
        cout << "Recommendation: Prioritize inspection and maintenance.\n";

    return 0;
}