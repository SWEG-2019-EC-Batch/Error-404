/*
   Task 2: Electricity bill
   
   (a) Inputs and Outputs:
       - Inputs: Electricity units consumed in a month (kWh, whole number)
       - Outputs: Energy charge (birr, two decimal places), Service charge (birr, two decimal places), and Total bill (birr, two decimal places)
   
   (b) Process:
       1. Prompt the user to enter the electricity units consumed.
       2. Define the fixed service charge constant as 10.00 birr.
       3. Compute the energy charge using the conditional operator:
          - If units <= 50: Energy Charge = units * 1.50
          - If units > 50: Energy Charge = (50 * 1.50) + ((units - 50) * 2.00)
       4. Calculate the total bill by adding the energy charge and the service charge.
       5. Print the energy charge and the total bill formatted to 2 decimal places using std::fixed and std::setprecision(2).
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int units;
    const double SERVICE_CHARGE = 10.00;
    
    // Read input
    cout << "Enter electricity units consumed (kWh): ";
    cin >> units;
    
    // Compute energy charge using the conditional operator (no if)
    double energyCharge = (units <= 50) ? (units * 1.50) : (50 * 1.50 + (units - 50) * 2.00);
    
    // Compute total bill
    double totalBill = energyCharge + SERVICE_CHARGE;
    
    // Print results formatted to 2 decimal places
    cout << fixed << setprecision(2);
    cout << "Energy: " << energyCharge << " and Total: " << totalBill << endl;
    
    return 0;
}
