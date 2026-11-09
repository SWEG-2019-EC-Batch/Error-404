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
