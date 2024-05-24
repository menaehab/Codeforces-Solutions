#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        long long n;
        cin >> n;
        vector<long long> x(n - 1);
        for (long long i = 0; i < n - 1; i++)
        {
            cin >> x[i];
        }
        vector<long long> arr(n);
        arr[n - 1] = 1000000000;
        for (long long i = n - 2; i >= 0; i--)
        {
            arr[i] = arr[i + 1] - x[i];
        }
        for (long long i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}