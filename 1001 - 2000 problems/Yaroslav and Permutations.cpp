#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> freq(1000000, 0); 
    int mx = INT_MIN;
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
        freq[arr[i]]++;
    }
    for (int i = 0; i < 1000000; i++) 
    {
        if (freq[i] != 0) 
        {
            mx = max(mx, freq[i]);
        }
    }
    if (n % 2 == 0) {
        if (mx <= n / 2)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else {
        int x = n / 2;
        if (mx <= x + 1) 
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
}