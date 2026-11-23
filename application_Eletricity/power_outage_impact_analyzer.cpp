#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

/**
 * @brief Calculates the impact score of a power outage.
 *
 * @param duration Outage duration in hours.
 * @param load Interrupted load in kW.
 * @param consumers Number of affected consumers.
 * @param facility Facility type.
 * @return Impact score between 0 and 100.
 */
int calculateImpact(double duration, double load,
                   int consumers, string facility)
{
    int score = 0;

    if (duration > 2)
        score += 20;

    if (duration > 6)
        score += 20;

    if (load > 100)
        score += 20;

    if (load > 500)
        score += 20;

    if (consumers > 100)
        score += 10;

    if (consumers > 1000)
        score += 10;

    if (facility == "commercial")
        score += 10;
    else if (facility == "industrial")
        score += 20;
    else if (facility == "hospital")
        score += 40;

    return min(score, 100);
}

/**
 * @brief Classifies outage severity.
 *
 * @param score Impact score.
 * @return Outage severity category.
 */
string classifyImpact(int score)
{
    if (score >= 80)
        return "SEVERE";
    else if (score >= 60)
        return "HIGH";
    else if (score >= 30)
        return "MODERATE";
    else
        return "LOW";
}

/**
 * @brief Main function of the outage impact analyzer.
 */
int main()
{
    double duration, load;
    int consumers;
    string facility;

    cout << "Power Outage Impact Analyzer\n";
    cout << "---------------------------\n";

    cout << "Enter outage duration (hours): ";
    cin >> duration;

    cout << "Enter interrupted load (kW): ";
    cin >> load;

    cout << "Enter affected consumers: ";
    cin >> consumers;

    cout << "Facility type (residential/commercial/"
            "industrial/hospital): ";
    cin >> facility;

    // Convert facility input to lowercase
    transform(facility.begin(), facility.end(),
             facility.begin(), ::tolower);

    if (duration < 0 || load < 0 || consumers < 0)
    {
        cout << "\nInvalid input. Negative values are not allowed.\n";
        return 1;
    }

    if (facility != "residential" &&
        facility != "commercial" &&
        facility != "industrial" &&
        facility != "hospital")
    {
        cout << "\nInvalid facility type.\n";
        return 1;
    }

    double interruptedEnergy = duration * load;

    int score = calculateImpact(
        duration, load, consumers, facility);

    string severity = classifyImpact(score);

    cout << "\n--- Outage Analysis ---\n";
    cout << "Interrupted Energy: "
         << interruptedEnergy << " kWh\n";

    cout << "Impact Score: " << score << "/100\n";
    cout << "Severity: " << severity << "\n";

    if (severity == "SEVERE")
        cout << "Priority: Immediate restoration assessment\n";
    else if (severity == "HIGH")
        cout << "Priority: High restoration priority\n";
    else if (severity == "MODERATE")
        cout << "Priority: Restoration should be planned promptly\n";
    else
        cout << "Priority: Normal restoration priority\n";

    return 0;
}