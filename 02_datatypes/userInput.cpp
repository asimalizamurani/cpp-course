#include <iostream>
#include <string>

using namespace std;

int main() {
    string userTea;
    int teaQuantity;

    cout << "What would you like to ordr in tea? \n";
    getline(cin, userTea);

    cout << "How many cups of " << userTea << " would you like to have ?";
    cin >> teaQuantity;

    cout << teaQuantity;
    cout << userTea;

    return 0;
}