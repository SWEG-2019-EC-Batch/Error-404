#include <iostream> // Allows us to use cin and cout
#include <iomanip> // Allows us to manipulate the input and outputs using manipulators like setprecision(),fixed......
using namespace std;

int main()
{
  double Assignment, Midterm,Final, Total; //Declaring variables to store the three marks and the total

    cout<<"Enter your Assignment, Midterm, Final exam marks separated in space: ";  // Prompt text for the user to input their marks
    cin>>Assignment>>Midterm>>Final;

     Total= (Assignment * 0.20) + (Midterm * 0.30) + (Final * 0.5);

      cout<<fixed<<setprecision(1);  // Displaying the total exactly with one decimal place

      cout<<"Your Course total is: "<<Total<<endl;

       cout<<(Total>=50? "Pass" : "Fail")<<endl;

       return 0;

     }
