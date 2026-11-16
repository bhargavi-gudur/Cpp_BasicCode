/**
 * @file monthly_forecast.cpp
 * @brief Forecasts monthly electricity consumption and cost.
 * @date 16/11/2026
 */

#include <iostream>
#include <iomanip>
using namespace std;

/**
 * @brief Calculates average daily electricity consumption.
 * @param previousUnits Electricity used in the previous period (kWh).
 * @param previousDays Number of days in the previous period.
 * @return Average daily consumption in kWh.
 */
double calculateDailyAverage(double previousUnits,
                             int previousDays) {
    return previousUnits / previousDays;
}

/**
 * @brief Forecasts electricity consumption.
 * @param dailyAverage Average daily consumption in kWh.
 * @param forecastDays Number of days in the forecast month.
 * @return Forecast consumption in kWh.
 */
double forecastUnits(double dailyAverage, int forecastDays) {
    return dailyAverage * forecastDays;
}

int main() {
    double previousUnits, rate;
    int previousDays, forecastDays;

    cout << "MONTHLY ELECTRICITY FORECAST CALCULATOR\n";

    cout << "Enter previous electricity units (kWh): ";
    cin >> previousUnits;

    cout << "Enter previous period days: ";
    cin >> previousDays;

    cout << "Enter forecast month days: ";
    cin >> forecastDays;

    cout << "Enter electricity rate per kWh (Rs.): ";
    cin >> rate;

    if (previousUnits < 0 || previousDays <= 0 ||
        forecastDays <= 0 || rate < 0) {
        cout << "Invalid input.\n";
        return 1;
    }

    double dailyAverage =
        calculateDailyAverage(previousUnits, previousDays);

    double predictedUnits =
        forecastUnits(dailyAverage, forecastDays);

    double estimatedBill = predictedUnits * rate;

    cout << fixed << setprecision(2);

    cout << "\nAverage Daily Consumption: "
         << dailyAverage << " kWh\n";

    cout << "Forecast Monthly Consumption: "
         << predictedUnits << " kWh\n";

    cout << "Estimated Electricity Bill: Rs. "
         << estimatedBill << '\n';

    return 0;
}