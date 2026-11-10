/* A. Input
The program accepts the following inputs from the user:
- Trip distance (kilometers).
- Travel time in hours (whole number).
- Travel time in minutes (whole number).
- Fuel consumption rate (liters per 100 km).
- Fuel price per liter (birr).

B. Processing

The program performs the following operations:
1. Converts the travel time into total hours by dividing the minutes by 60 and adding the hours.
2. Calculates the average speed by dividing the total distance by the total travel time in hours.
3. Calculates the fuel used by multiplying the distance by the fuel consumption rate and dividing by 100.
4. Calculates the total fuel cost by multiplying the fuel used by the price per liter.
5. Formats all calculated results to two decimal places.

C. Output
The program displays:
- Average speed (km/h).
- Total fuel used (liters).
- Total fuel cost (birr).
    */
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
