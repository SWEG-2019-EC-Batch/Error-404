// 1. Inputs
// Distance of the trip in kilometers (distance).
// Travel time in hours (hours).
// Travel time in minutes (minutes).
// Car's fuel consumption in liters per 100 km (fuel_consumption).
// Price per liter in birr (price_per_liter).

// 2. Processes
// Convert travel time from hours and minutes into total hours.
// Calculate the average speed by dividing the distance by the total travel time.
// Calculate the fuel used by multiplying the distance by fuel consumption and dividing by 100.
// Calculate the fuel cost by multiplying the fuel used by the price per liter.
// Format the calculated results to display two decimal places.

// 3. Outputs
// Average speed in kilometers per hour (km/h).
// Total fuel used in liters.
// Total fuel cost in birr.

//The code

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    // Step 1: Constants
    const int minutes_per_hour = 60;

    // Step 2: Variables
    double distance, fuel_consumption, price_per_liter;
    double total_time, average_speed, fuel_used, fuel_cost;
    int hours, minutes;

    // Step 3: Read inputs
    cout << "Enter distance (km): ";
    cin >> distance;

    cout << "Enter travel time (hours): ";
    cin >> hours;

    cout << "Enter travel time (minutes): ";
    cin >> minutes;

    cout << "Enter fuel consumption (liters per 100 km): ";
    cin >> fuel_consumption;

    cout << "Enter price per liter (birr): ";
    cin >> price_per_liter;

    // Step 4: Calculate
    total_time = hours + (double)minutes / minutes_per_hour;

    average_speed = distance / total_time;

    fuel_used = distance * fuel_consumption / 100;

    fuel_cost = fuel_used * price_per_liter;

    // Step 5: Print results
    cout << fixed << setprecision(2);

    cout << "Average speed: " << average_speed << " km/h" << endl;
    cout << "Fuel used: " << fuel_used << " liters" << endl;
    cout << "Fuel cost: " << fuel_cost << " birr" << endl;
    return 0;
}