#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    vector<int> a(n1);
    for (int i = 0; i < n1; i++) {
        cin >> a[i];
    }

    vector<int> b(n2);
    for (int i = 0; i < n2; i++) {
        cin >> b[i];
    }

    vector<int> uni;
    int i = 0, j = 0;

    while (i < n1 && j < n2) {
        if (a[i] <= b[j]) {
            if (uni.size() == 0 || uni.back() != a[i]) {
                uni.push_back(a[i]);
            }
            i++;
        } else {
            if (uni.size() == 0 || uni.back() != b[j]) {
                uni.push_back(b[j]);
            }
            j++;
        }
    }

    while (i < n1) {
        if (uni.size() == 0 || uni.back() != a[i]) {
            uni.push_back(a[i]);
        }
        i++;
    }

    while (j < n2) {
        if (uni.size() == 0 || uni.back() != b[j]) {
            uni.push_back(b[j]);
        }
        j++;
    }

    for (int val : uni) {
        cout << val << " ";
    }

    return 0;
}
