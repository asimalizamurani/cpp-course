/* 
4. Switch Case

Challenge: Write a program that lets the user select a tea type from a menu. Use a switch statement to display the price based on the selected tea:* Green Tea:$2
    : Black Tea:$3
    : Oolong Tea:$4
 */

#include<iostream>

using namespace std;

int main() {
    
    int choice;
    double teaPrice;

    cout << "Select your Tea \n";
    cout << "1. Green Tea \n";
    cout << "2. Black Tea \n";
    cout << "3. Oolong Tea \n";
    cout << "Enter your choice in number \n";
    cin >> choice;
    
    switch (choice)
    {
    case 1:
    teaPrice = 2;
    cout << "The Green Tea cost $" << teaPrice << endl;
        break;
    case 2:
        teaPrice = 3;
        cout << "The Black Tea cost $" << teaPrice << endl;
        break;
    case 3:
        teaPrice = 4;
        cout << "The Oolong Tea cost $" << teaPrice << endl;
        break;
    
    default:
        cout << "Soory this Tea doesn't exist" << endl;
        
    }

    return 0;
}