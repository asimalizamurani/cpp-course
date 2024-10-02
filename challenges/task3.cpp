/* 
3. Challenge 3: Relational and logical Operators
   A tea subscription service offers a discount if the user buys more than 12 cups or if they are a member for more than a year. Write a program that checks if the user qualifies for a discount based on their input.
 */

#include <iostream>

using namespace std;

int main () {

    int numOfCups;
    int memberYear;

    cout << "Enter the number of cups you want to buy \n";
    cin >> numOfCups;

    cout << "Are you a member mention the number of year \n";
    cin >> memberYear;

    if (numOfCups > 12 || memberYear > 1) {
        cout << "You are qualify for a discount";
    } else {
        cout << "You bought " << numOfCups << " cup of tea and you are a member for " << memberYear << " year";
    }
}