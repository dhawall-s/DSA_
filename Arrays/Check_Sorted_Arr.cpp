#include<iostream>
using namespace std;

int main() {
    bool check = true;  // assume array is sorted
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    if (n <= 1) {
        cout << "Sorted (single element or empty array)";
        return 0;
    }

    int arr[n];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            check = false;
            break;
        }
    }

    if (check) {
        cout << "Sorted" << endl;
    } else {
        cout << "Not Sorted" << endl;
    }

    return 0;
}
