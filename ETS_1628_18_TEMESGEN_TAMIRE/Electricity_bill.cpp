// 1. Inputs
// Electricity units consumed in a month (units), measured in kWh.

// 2. Processes
// Read the number of electricity units consumed.
// Calculate the energy charge using the conditional operator (?:):
// If the units are less than or equal to 50, multiply the units by 1.50 birr.
// If the units are greater than 50, calculate the charge for the first 50 units at 1.50 birr each, then charge every additional unit at 2.00 birr.
// Set the fixed service charge to 10 birr.
// Calculate the total bill by adding the energy charge and service charge.
// Format the energy charge, service charge and total bill to display two decimal places.

// 3. Outputs
// Energy charge (birr).
// Service_charge 
// Total electricity bill (birr).

// The code

#include <iostream>

using namespace std;

int main()
{
    //step 1 : constants
    const double service_charge=10;

    //step 2 : variables
    int units;
    double energy_charge, total_bill;


    //step 3 : Read inputs
    cout << "enter units: " << endl;
    cin>>units;

    //step 4 : calculate
    energy_charge=units <= 50? units*1.5: units*2;
    total_bill= energy_charge+service_charge;

    //step 5 :print the result

    cout<<fixed<<setprecision(2);
    cout<<"Energy charge"<<energy_charge<<"birr"<<endl;
    cout<<"Service charge"<<service_charge<<"birr"<<endl;
    cout<<"Total bill"<<total_bill<<"birr"<<endl;



    return 0;
}