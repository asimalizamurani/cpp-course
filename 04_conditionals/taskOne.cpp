/* 
1. If Statement
    Challenge: Write a program that checks if the user wants to order Green Tea. If the user types "Green Tea", the program should confirm their order.
 */

#include<iostream>
#include <string>

using namespace std;

int main() {
    
    string teaOrder;

    cout << "Order your tea bro \n";
    getline(cin, teaOrder);

    if (teaOrder == "Green Tea")
    {
        cout << "Your order is confirmed enjoy your Green Tea";
    }
    

    return 0;
}