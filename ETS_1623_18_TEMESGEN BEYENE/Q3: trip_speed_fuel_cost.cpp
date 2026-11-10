/*
   Task 3: Trip speed and fuel cost
   
   (a) Inputs and Outputs:
       - Inputs: Distance of the trip in km, travel time hours and minutes, fuel consumption rate (liters per 100 km), and price per liter (birr)
       - Outputs: Average speed (km/h), fuel used (liters), and fuel cost (birr), each with two decimal places
   
   (b) Process:
       1. Prompt for and read the trip distance, travel hours, travel minutes, fuel consumption rate, and price per liter.
       2. Convert travel minutes to hours by dividing by 60.0 and add to hours to get total travel time in hours.
       3. Calculate average speed as distance / totalHours.
       4. Calculate total fuel used using the rate per 100 km: (distance / 100.0) * fuelRate.
       5. Calculate total fuel cost by multiplying the fuel used by the price per liter.
       6. Print the average speed, fuel used, and fuel cost, each formatted to two decimal places using std::fixed and std::setprecision(2).
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double distance, fuelRatePer100Km, pricePerLiter;
    int hours, minutes;
    
    // Read inputs
    cout << "Enter trip distance (km): ";
    cin >> distance;
    cout << "Enter travel time - hours: ";
    cin >> hours;
    cout << "Enter travel time - minutes: ";
    cin >> minutes;
    cout << "Enter fuel consumption (liters per 100 km): ";
    cin >> fuelRatePer100Km;
    cout << "Enter price per liter (birr): ";
    cin >> pricePerLiter;
    
    // Convert total time to hours using casting
    double totalHours = hours + (static_cast<double>(minutes) / 60.0);
    
    // Compute metrics
    double avgSpeed = distance / totalHours;
    double fuelUsed = (distance / 100.0) * fuelRatePer100Km;
    double fuelCost = fuelUsed * pricePerLiter;
    
    // Print results formatted to 2 decimal places
    cout << fixed << setprecision(2);
    cout << avgSpeed << " km/h, " << fuelUsed << " liters and " << fuelCost << " birr." << endl;
    
    return 0;
}
