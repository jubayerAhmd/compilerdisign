#include <iostream>
using namespace std;


double calculate_average(int arr[], int size) {
    int sum = 0;


    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }


    return static_cast<double>(sum) / size;  // Cast to double for decimal precision
}

int main() {
    int n;


    cout << "Enter the number of elements in the array: ";
    cin >> n;


    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    double avg = calculate_average(arr, n);


    cout << "The average of the array elements is: " << avg << endl;

    return 0;
}

