1. Input
- Trip distance in kilometers.
- Travel duration in hours and minutes.
- Fuel consumption per 100 kilometers.
- Fuel price per liter in birr.
2. Process
- Read the trip distance, travel duration, fuel consumption and fuel price.
- Convert the travel duration into total hours.
- Calculate the average speed using distance divided by total time.
- Calculate the total fuel required for the trip.
- Calculate the total fuel cost.
- Display all calculated results to two decimal places.
3. Output
- Average travel speed (km/h).
- Total fuel consumed (liters).
- Total fuel expense (birr).

// The code

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Step 1: Constant
    const int MINUTES_PER_HOUR = 60;

    // Step 2: Variables
    double tripDistance, fuelConsumption, fuelPrice;
    double totalTime, averageSpeed, fuelUsed, fuelCost;
    int travelHours, travelMinutes;

    // Step 3: Get inputs
    cout << "Enter trip distance in km: ";
    cin >> tripDistance;

    cout << "Enter travel hours: ";
    cin >> travelHours;

    cout << "Enter additional minutes: ";
    cin >> travelMinutes;

    cout << "Enter fuel consumption per 100 km: ";
    cin >> fuelConsumption;

    cout << "Enter fuel price per liter: ";
    cin >> fuelPrice;

    // Step 4: Perform calculations
    totalTime = travelHours + (double)travelMinutes / MINUTES_PER_HOUR;

    averageSpeed = tripDistance / totalTime;

    fuelUsed = tripDistance * fuelConsumption / 100;

    fuelCost = fuelUsed * fuelPrice;

    // Step 5: Display results
    cout << fixed << setprecision(2);

    cout << "Average Speed: " << averageSpeed << " km/h" << endl;
    cout << "Total Fuel Used: " << fuelUsed << " liters" << endl;
    cout << "Total Fuel Cost: " << fuelCost << " birr" << endl;

    return 0;
}