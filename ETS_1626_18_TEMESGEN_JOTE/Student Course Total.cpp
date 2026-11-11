1. Input
- Student's assignment mark (out of 100).
- Student's mid_exam mark (out of 100).
- Student's final_exam mark (out of 100).
2. Process
- Read the assignment, mid_exam and final_exam marks.
- Calculate the weighted assignment mark using 20%.
- Calculate the weighted mid_exam mark using 30%.
- Calculate the weighted final_exam mark using 50%.
- Add the three weighted marks to get the total.
- Use the conditional operator (?:) to determine the result:
  - If the total is 50 or above, display Pass.
  - Otherwise, display Fail.
- Display the total to two decimal places.
3. Output
- Student's total mark.
- Student's result (Pass or Fail).

// The code

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Steps 4.1 : constants
    const double assignment_weight = 0.2;
    const double mid_exam_weight = 0.3;
    const double final_exam_weight = 0.5;

    // step 4.2: variables
    double assignment, mid_exam, final_exam, total;


    // Step 4.3: read the input

    cout << "Enter assignment, mid_exam and final_exam separated by space: ";
    cin >>assignment>>mid_exam>>final_exam;

    // Step 4.4: calculate
    total= assignment*assignment_weight+mid_exam*mid_exam_weight+final_exam*final_exam_weight;

    // Step 4.5: print the result
    cout << fixed << setprecision(2);
    cout << "Total : " << total << endl;

    cout<<(total>=50 ? "pass" : "fail") <<endl;


    return 0;
}