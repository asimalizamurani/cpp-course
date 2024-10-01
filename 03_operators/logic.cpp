/* 4: Logical Operators

Challenge: Create a program that checks if a user is eligible for a tea subscription discount. The discount applies if the user is either a student of has purchased more than 15 cups. Ask the user to input their status (student or not) and their cup count.
&& and || or operators 
*/

#include <iostream>

using namespace std;

int main () {

    int numOfCups;
    bool isStudent;

    cout << "Are you a student (1 for yes 0 for No) ? \n";
    cin >> isStudent;

    cout << "Enter the number of cups you have \n";
    cin >> numOfCups;

    if (isStudent == 1 || numOfCups > 20) {
        cout << "You are eligible for a discount";
    }
    else {
        cout << "You are not eligible for a discount";
    }


    return 0;
}