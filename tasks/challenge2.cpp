#include <iostream>

using namespace std;

int main () {

    string teaType;
    int teaPrice;

    cout << "Which tea would you like to drink? \n";
    getline(cin, teaType);

    cout << "How much would you like to pay? \n";
    cin >> teaPrice;

    teaPrice = (float) teaPrice * 1.10;

    cout << "The " << teaType << " cost " << teaPrice << " rupees" << endl;

    return 0;
}