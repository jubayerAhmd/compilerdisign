#include <iostream>
#include <climits>
using namespace std;


void find_min_max(int arr[], int size, int &min_val, int &max_val) {
    min_val = INT_MAX;
    max_val = INT_MIN;


    for (int i = 0; i < size; i++) {
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
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

    int min_val, max_val;


    find_min_max(arr, n, min_val, max_val);


    cout << "The minimum value in the array is: " << min_val << endl;
    cout << "The maximum value in the array is: " << max_val << endl;

    return 0;
}

