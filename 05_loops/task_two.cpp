/* 
2. Do-While Loop
Challenge: Create a program that asks the user if they want more tea. Keep asking them until they type "no" (case-insensitive), using a do-while loop
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
    string response;

    do
    {
        cout << "Do you want to order more tea (yes/no) \n";
        getline(cin, response);

    } while (response != "no");
    

    return 0;
}