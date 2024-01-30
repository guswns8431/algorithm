#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string input;

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> input;

    for (unsigned int i = 0; i < input.size(); i++)
        cout << (char)(input[i] - 32);

    return (0);
}