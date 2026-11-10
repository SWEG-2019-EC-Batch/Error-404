/*  A. Input
The program accepts the following input from the user:

- Electricity units consumed in a month (kWh), as a whole number.

B. Processing
The program performs the following operations:
1. Checks whether the electricity consumption is 50 units or less, or greater than 50 units, using the conditional operator (?:).
2. If the consumption is 50 units or less, multiplies the units by 1.50 birr.
3. If the consumption is above 50 units:
   - Calculates the cost of the first 50 units at 1.50 birr each.
   - Calculates the cost of the remaining units at 2.00 birr each.
4. Adds a fixed service charge of 10 birr to the energy charge.
5. Calculates the total electricity bill.

C. Output
The program displays:
- Energy charge (two decimal places).
- Service charge (two decimal places).
- Total electricity bill (two decimal places).
    */
#include <iostream> // Allows us to use cin and cout
#include<iomanip> // Allows us to manipulate our input and output using manipulators like fixed,setprecision()....
using namespace std;

int main(){

    //Declaring variables to store the electrical units used, the energy charge, total bill and the fixed service charge

    int units;
    double energyCharge, totalBill;
    double serviceCharge = 10.0;

        cout<<"Enter Electricity units used in a month (kWh) : "; //Prompt text for the user to write the electricity units
        cin>>units;

        //calculation part

       energyCharge= (units<=50) ? (units * 1.50) : (50 * 1.50) + ((units - 50) * 2.00);

       totalBill= energyCharge + serviceCharge;


       // Printing the results in two decimal places


       cout<<fixed<<setprecision(2);

       cout<<"The Energy charge is : "<<energyCharge<<endl;
       cout<<"The Service charge is : "<<serviceCharge<<endl;
       cout<<"The Total bill is : "<<totalBill<<endl;


       return 0;





}
