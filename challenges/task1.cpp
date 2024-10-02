/* 
1. Challenge 1: Arithmetic Operators
Write a program that calculates the price of tea packs. A user enters the number of tea packs they want, and the price per pack. Apply a 10% tax to the total price and display the final cost.
 */

#include <iostream>

using namespace std;

int main () {

    int teaPacks;
    int pricePerPack;
    int totalPrice;
    int taxes;
    
    cout << "Enter the number of tea packs you want \n";
    cin >> teaPacks;

    cout << "Enter the price per pack \n";
    cin >> pricePerPack;

    // totalPrice =  pricePerPack + (pricePerPack  * 0.10);


    totalPrice = pricePerPack * teaPacks;

    taxes = totalPrice + (totalPrice * 0.10);

    cout << "The total price of tea packs with taxes is: " << taxes;
    

    return 0;
}