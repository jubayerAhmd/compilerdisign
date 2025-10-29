#include <iostream>
#include <string>
using namespace std;

int main() {
    string first_name, last_name, full_name;


    cout << "Enter your first name: ";
    cin >> first_name;
    cout << "Enter your last name: ";
    cin >> last_name;


    full_name = first_name + " " + last_name;


    cout << "Full name: " << full_name << endl;

    return 0;
}

