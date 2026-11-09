#include <iostream> //Allows us to use cin and cout
#include <iomanip>  // Allows us to manipulate our input and output using manipulators like fixed,setprecision().....
using namespace std;

int main(){

    //Variable declarations

    double distance, fuelRate , pricePerLiter;
    double averageSpeed, fuelUsed, fuelCost, travelTime;
    int hours,minutes;


    cout<<"Enter the distance traveled (KM) : "<<endl;
      cin>>distance;

      cout<<"Enter travel time in hours and minutes separated by space: "<<endl;
      cin>>hours>>minutes;

      cout<<"Enter the Fuel Rate (liter/100KM) : " <<endl;
        cin>>fuelRate;


        cout<< "Enter the price per liter: "<<endl;
        cin>>pricePerLiter;

        //Calculation part

        travelTime= hours + (minutes/60.0);
        averageSpeed = distance/ travelTime;
        fuelUsed = (fuelRate * distance)/100;
        fuelCost= fuelUsed * pricePerLiter;


        //Displaying results with two decimal places

        cout<<fixed<<setprecision(2);


        cout<<"The average speed is : "<<averageSpeed<<"KM/hr"<<endl;
        cout<<"The fuel used is : "<<fuelUsed<<"liters"<<endl;
        cout<<"The fuel cost is: " <<fuelCost<<"birr"<<endl;


        return 0;



}
