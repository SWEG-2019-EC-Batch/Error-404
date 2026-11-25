#include <iostream>
#include <string>
using namespace std;

int main() {
    float base_fare, bag_weight, rate, total_fare, extra_fare, discount;
    short int age, WEIGHT_LIMIT = 20;
    char isstud, another_trip;
    int route_choice;
    string destination;

    do {
        // Reset per-trip calculated values so previous trips do not carry over
        extra_fare = 0.0f;
        discount = 0.0f;
        destination = "";

        cout << "\n========================================\n";
        cout << "Departure: Addis Ababa, Ethiopia\n";
        cout << "Select your destination route:\n";
        cout << "Press 1 for Dire Dawa\n";
        cout << "Press 2 for Hawassa\n";
        cout << "Press 3 for Bahir Dar\n";
        cout << "Press 4 for Mekelle\n";
        cout << "Press 5 for Jimma\n";
        cout << "Press 6 for Adama\n";
        cout << "Enter choice (1-6): ";
        cin >> route_choice;

        switch (route_choice) {
            case 1:
                destination = "Dire Dawa";
                break;
            case 2:
                destination = "Hawassa";
                break;
            case 3:
                destination = "Bahir Dar";
                break;
            case 4:
                destination = "Mekelle";
                break;
            case 5:
                destination = "Jimma";
                break;
            case 6:
                destination = "Adama";
                break;
            default:
                cout << "Invalid route choice! Please select a number from 1 to 6.\n";
                cout << "Do you want to book another trip? (Y/N): ";
                cin >> another_trip;
                continue;
        }

        cout << "Route selected: Addis Ababa -> " << destination << endl;

        cout << "input base_fare in ETB ";
        cin >> base_fare;
        cout << "input bag weight in kg ";
        cin >> bag_weight;
        cout << "input rate ";
        cin >> rate;
        cout << "What is your Age  ";
        cin >> age;
        cout << "Are you a student; say Y if you are a student, say N if you are not a student ";
        cin >> isstud;

        if (bag_weight > WEIGHT_LIMIT) {
            extra_fare = (bag_weight - WEIGHT_LIMIT) * rate;
        }

        if (isstud == 'Y' || isstud == 'y') {
            if (age <= 0) {
                cout << "Invalid, please insert age greater than or equal to 1" << endl;
                return 0;
            } else if (age <= 12) {
                discount = base_fare * 0.65;
            } else if (age >= 60) {
                discount = base_fare * 0.4;
            } else {
                discount = 0;
            }
        } else {
            if (age <= 0) {
                cout << "Invalid, please insert age greater than or equal to 1" << endl;
                return 0;
            } else if (age <= 12) {
                discount = base_fare * 0.5;
            } else if (age >= 60) {
                discount = base_fare * 0.25;
            } else {
                discount = 0;
            }
        }

        total_fare = (base_fare - discount) + extra_fare;

        cout << "\nYour trip fare information (" << destination << " from Addis Ababa): ";
        cout << "Your base fare " << base_fare << "Br" << endl;
        cout << "Your Discount is " << discount << endl;
        cout << "The extra payment " << extra_fare << "Br" << endl;
        cout << "Toal fare " << total_fare << "Br" << endl;

        cout << "\nDo you want to calculate another trip? (Y/N): ";
        cin >> another_trip;

    } while (another_trip == 'Y' || another_trip == 'y');

    cout << "\nThank you for using Addis Ababa Bus Ticket Fare System!" << endl;
    return 0;
}
