/* 
2. Challenge 2: Assignment Operators
   Create a program where the user inputs the number of tea bags they have.
   If the number is less than 20, give them 10 extra bags using hte `+=` assignment operator. Display the updated total.
 */

#include <iostream>

using namespace std;

int main () {

    int numOfTeaBags;

    cout << "Enter the number of tea bags you have \n";
    cin >> numOfTeaBags;

    if (numOfTeaBags < 20) {
        numOfTeaBags += 10;
    }

    cout << "Your total number of tea bags are: " << numOfTeaBags;
}