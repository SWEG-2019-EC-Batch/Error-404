//Modification 1

#include <iostream>
#include <iomanip>

using namespace std;
 
int main ()
{
     double base_fare, luggage_weight, extra_rate, extra_charge, discount,  total_fare;
    int  age;
    char students ;

    cout<<"Enter the base fare for the trip(birr): " ;
    cin>> base_fare ;

    cout<<"Enter the rate for Extra weight(birr/kg): " ;
    cin>> extra_rate ;

    cout<<"Enter the weight of the luggage(kg): " ;
    cin>> luggage_weight ;

    cout<<"Enter the age of the passenger: " ;
    cin>> age ;

    cout<<"Is the passenger a student? (y/n): " ;
    cin>> students ;

   

    if (luggage_weight>20) {
        extra_charge=extra_rate*(luggage_weight-20);
    } else {
        extra_charge=0;
    }
    if (age<=12) { 
        discount=base_fare*0.50;
    
    } else if (age>=60) {
        discount=base_fare*0.25;
        
    } else if (students=='y' || students=='Y') {
        discount=base_fare*0.15;
        
    } else {
        discount=0;
        
    }
    
    base_fare=base_fare-discount;
    total_fare=base_fare + extra_charge;

    cout<<fixed<<setprecision(2);
    cout<<"Base fare: "<<base_fare<<" ETB"<<endl ;
    cout<<"Extra luggage charge: "<<extra_charge<<" ETB"<<endl ;
    cout << "Discount: " << discount << " birr" << endl;
    cout<<"Total fare: "<<total_fare<<" ETB"<<endl ;

return 0;

}


// Modification 2

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    
    int route, age;
    double base_fare, luggage_weight, extra_rate, extra_charge, discount, total_fare;
    char student;

    string destination;

    // Select route
    cout << "Available Routes:" << endl;
    cout << "1. Addis Ababa - Hosaina" << endl;
    cout << "2. Addis Ababa - Hawassa" << endl;
    cout << "3. Addis Ababa - Bishoftu" << endl;
    cout << "4. Addis Ababa - Dilla" << endl;
    cout << "5. Addis Ababa - Arsi Negelle" << endl;

    cout << "Enter route number: ";
    cin >> route;

    // Determine destination using switch
    switch (route)
    {
        case 1:
            destination = "Hosaina";
            break;

        case 2:
            destination = "Hawassa";
            break;

        case 3:
            destination = "Bishoftu";
            break;

        case 4:
            destination = "Dilla";
            break;

        case 5:
            destination = "Arsi Negelle";
            break;

        default:
            cout << "Invalid route!" << endl;
            return 0;
    }

    
    cout << "Enter the base fare for the trip(birr): ";
    cin >> base_fare;

    // Enter luggage weight
    cout << "Enter luggage weight (kg): ";
    cin >> luggage_weight;

    // Input extra luggage rate
    cout << "Enter extra luggage rate (birr/kg): ";
    cin >> extra_rate;

    // Calculate extra luggage charge
    if (luggage_weight > 20)
        extra_charge = (luggage_weight - 20) * extra_rate;
    else
        extra_charge = 0;

    // Passenger information
    cout << "Enter the age of the passenger: ";
    cin >> age;

    cout << "Is the passenger a student? (Y/N): ";
    cin >> student;

    // Calculate discount
    if (age <= 12)
        discount = base_fare * 0.50;

    else if (age >= 60)
        discount = base_fare * 0.25;

    else if (student == 'Y' || student == 'y')
        discount = base_fare * 0.15;

    else
        discount = 0;

    // Step 9: Calculate the total fare
    base_fare=base_fare - discount;
    total_fare = base_fare  + extra_charge;

    // Step 10: Display results
    cout << fixed << setprecision(2);

    
    cout << "Destination: Addis Ababa - " << destination << endl;
    cout << "Base fare: " << base_fare << " birr" << endl;
    cout << "Extra luggage charge: " << extra_charge << " birr" << endl;
    cout << "Discount: " << discount << " birr" << endl;
    cout << "Total fare: " << total_fare << " birr" << endl;

    return 0;
}

