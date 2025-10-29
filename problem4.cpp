#include <iostream>
#include <cctype>

using namespace std;


bool is_identifier(const string& input_string) {

    if (input_string.empty()) {
        return false;
    }


    if (!(isalpha(input_string[0]) || input_string[0] == '_')) {
        return false;
    }


    for (size_t i = 1; i < input_string.length(); ++i) {
        if (!(isalnum(input_string[i]) || input_string[i] == '_')) {
            return false;
        }
    }

    return true;
}

int main() {
    string input_string;


    cout << "Enter a string to check if it's a valid identifier: ";
    cin >> input_string;


    if (is_identifier(input_string)) {
        cout << "'" << input_string << "' is a valid identifier." << endl;
    } else {
        cout << "'" << input_string << "' is not a valid identifier." << endl;
    }

    return 0;
}

