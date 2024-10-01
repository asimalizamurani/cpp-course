#include <iostream>

using namespace std;

int main() {

    float teaPrice = 34.654;
    // Type csting
    int roundedTeaPrice = (int) teaPrice;

    int teaQuantity = 3;
    double totalPrice = teaPrice * teaQuantity;



    cout << totalPrice << endl;

    return 0;
}