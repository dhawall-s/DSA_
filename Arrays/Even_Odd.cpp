#include<iostream>
using namespace std;

void countEvenOdd(int arr[], int n) {
    int evenCount = 0;
    int oddCount = 0;
    int zeroCount = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            zeroCount++;
        } else if (arr[i] > 0) {
            if (arr[i] % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        }
    }

    cout << "Positive Even Numbers: " << evenCount << endl;
    cout << "Positive Odd Numbers: " << oddCount << endl;
    cout << "Zeros: " << zeroCount << endl;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    countEvenOdd(arr, n);
    return 0;
}
