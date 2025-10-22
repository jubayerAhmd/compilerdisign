#include <iostream>
#include <string>
using namespace std;

void checkComment(string input) {
    if (input.substr(0, 2) == "//") {
        cout << "It is a Single Line Comment." << endl;
    }
    else if (input.substr(0, 2) == "/*" && input.substr(input.length() - 2) == "*/") {
        cout << "It is a Multi-line Comment." << endl;
    }
    else {
        cout << "It is NOT a Comment." << endl;
    }
}

int main() {
    string input;
    cout << "Enter a line: ";
    getline(cin, input);

    checkComment(input);

    return 0;
}
