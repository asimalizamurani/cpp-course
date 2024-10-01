/* 3: Relational Operators

Challenge: A teashop offers a loyalty program. Customers who buy more than 20 cups of tea get a special "Gold" badge, and those who buy 10 to 20 cups get a "Silver" badge. Write a program to display the badge they will receive based on the number of cups they buy.
>, >=, <, <=
 */

#include <iostream>

using namespace std;

int main () {

    int numOfCups;

    cout << "Enter the number of cups you want to buy \n";
    cin >> numOfCups;

    if (numOfCups > 20) {
        cout << "You got a Gold badge";
    }
    else if (numOfCups >= 10 && numOfCups <= 20) {
        cout << "You got a Silver badge";
    } else {
        cout << "No badge";
    }

    return 0;
}