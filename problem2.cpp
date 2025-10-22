#include <iostream>
#include <string>
using namespace std;

void checkOperator(string input) {
    bool found = false;

    cout << "Operators found: ";
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == '+' || input[i] == '-' || input[i] == '*' ||
            input[i] == '/' || input[i] == '%' || input[i] == '=') {
            cout << input[i] << " ";
            found = true;
        }
    }

    if (!found)
        cout << "No operators found.";

    cout << endl;
}

int main() {
    string input;
    cout << "Enter an expression: ";
    cin >> input;


    checkOperator(input);

    return 0;
}
