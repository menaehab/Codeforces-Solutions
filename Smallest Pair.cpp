#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[105]; 
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        int Min = INT_MAX;
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                int currentSum = arr[i] + arr[j] + j - i;
                Min = min(Min, currentSum);
            }
        }
        cout << Min << endl;
    }
}