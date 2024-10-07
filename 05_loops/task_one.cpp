/* 
1. While Loop

Challenge: Write a program that keeps track of tea orders. EAch time a cup of tea is made, decrease the number of cups remaining. The loop should run until all cups are served.
 */

#include <iostream>

using namespace std;

int main() {
    int teaCups;

    cout << "Enter the number of tea cups \n";
    cin >> teaCups;

    // while loop
    while (teaCups > 0) {
        teaCups--;
        cout << "Serving cup of tea \n" << teaCups << " remaing" << endl;
    }

    cout << "All teas are served";

    return 0;
}