#include <iostream>
#include <string>

using namespace std;

int main () {

    string favoriteTea;
    int cupOfTea;

    cout << "Write your favorite tea name \n";
    getline(cin, favoriteTea);

    cout << "How many cups of tea would you want ? \n";
    cin >> cupOfTea;

    cout << "Hey bro you have taken " << favoriteTea << " with " << cupOfTea << " cups lets enjoy drinking";

    return 0;
}