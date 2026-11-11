1. Input
- Number of electricity units consumed in a month (kWh).
2. Process
- Read the number of units consumed.
- Calculate the energy charge using the conditional operator (?:):
  - If units are 50 or less, charge 1.50 birr per unit.
  - If units are above 50, charge 1.50 birr for the first 50 units and 2.00 birr for each additional unit.
- Add a fixed service charge of 10 birr.
- Calculate the total bill.
- Display all charges to two decimal places.
3. Output
- Energy charge (birr).
- Service charge (birr).
- Total electricity bill (birr).

// The code

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Step 1: Declare variables
    int units;
    double energyCharge, serviceCharge = 10.0, totalBill;

    // Step 2: Read input
    cout << "Enter electricity units: ";
    cin >> units;

    // Step 3: Calculate energy charge
    energyCharge = (units <= 50)
                   ? units * 1.50
                   : (50 * 1.50) + (units - 50) * 2.00;

    // Step 4: Calculate total bill
    totalBill = energyCharge + serviceCharge;

    // Step 5: Display output
    cout << fixed << setprecision(2);

    cout << "Energy Charge: " << energyCharge << " Birr" << endl;
    cout << "Service Charge: " << serviceCharge << " Birr" << endl;
    cout << "Total Bill: " << totalBill << " Birr" << endl;

    return 0;
}