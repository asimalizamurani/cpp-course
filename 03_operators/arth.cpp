/* Challenge: Create a program that calculates the total price of tea cups. The user inputs the number of cups they want and the price per cup. The program should calculate the total price, apply a 5% discount if the total is above a certain amount, and show the final price.
+, -, *, /, % 
*/

#include <iostream>

using namespace std;

int main() {

    int pricePerCup;
    int numberOfCups;
    int totalPrice;
    float discountedPrice;

    cout << "Enter the number of cups you want \n";
    cin >> numberOfCups;

    cout << "Enter the price per cup \n";
    cin >> pricePerCup;

    totalPrice = pricePerCup * numberOfCups;

    if (totalPrice >= 200) {
       discountedPrice = totalPrice - (totalPrice * 0.05);
       cout << "The discounted price is " << discountedPrice;
    }
    else {
        cout << "The total price is " << totalPrice;
    }

    return 0;
}