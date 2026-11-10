/*A.Input
The program accepts the following inputs from the user:
- Assignment mark (out of 100).
- Midterm examination mark (out of 100).
- Final examination mark (out of 100).
 B. Processing
The program performs the following operations:
1. Calculates 20% of the assignment mark.
2. Calculates 30% of the midterm mark.
3. Calculates 50% of the final examination mark.
4. Adds the three weighted marks to calculate the total course mark.
5. Uses the conditional operator (?:) to determine whether the student passes or fails.
   - Total mark greater than or equal to 50: Pass.
   - Total mark less than 50: Fail.
C. Output
The program displays:
- The student's total course mark, formatted to one decimal place.
- The student's result: Pass or Fail.   */

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
