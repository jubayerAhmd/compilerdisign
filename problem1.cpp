#include <iostream>
#include <string>
using namespace std;

// Function to check if input is a numeric constant
void checkNumericConstant(string input) {
    bool isNumeric = true;

    for (int i = 0; i < input.length(); i++) {
        if (!isdigit(input[i])) {   // check if each character is a digit
            isNumeric = false;
            break;
        }
    }

    if (isNumeric)
        cout << input << " is a Numeric Constant." << endl;
    else
        cout << input << " is NOT a Numeric Constant." << endl;
}

int main() {
    string input;
    cout << "Enter any input: ";
    cin >> input;

    // Call the function
    checkNumericConstant(input);

    return 0;
}
