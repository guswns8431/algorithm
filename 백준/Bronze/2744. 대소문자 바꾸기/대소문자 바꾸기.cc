#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main(void) {
    string input;

    cin >> input;

    for (unsigned int i = 0; i < input.size(); i++) {
        if (isupper(input[i]))
            cout << (char)tolower(input[i]);
        if (islower(input[i]))
            cout << (char)toupper(input[i]);
    }
    return (0);
}