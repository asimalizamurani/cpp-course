#include <iostream>
#include <string>

using namespace std;

int main() {
    // https://learn.microsoft.com/en-us/cpp/c-language/escape-sequences?view=msvc-170 : Escape sequences In C++ docs

    // \n for new line and \t for tab it gives some space between the words
    string favoriteTea = "Green Tea \t \n";
    // \" for printing the word of character that we want to pring -> \user/register/"
    string description = "Known is the \"best\" tea in Balochistan";

    cout << favoriteTea << description << endl;

    return 0;
}