#include <iostream>
#include <vector>
using namespace std;
int main()
{
    long long n, res = INT_MIN, sum = 0;
    cin >> n;
    vector<int>arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (long long i = 0; i < n; i++) {
        sum = sum + arr[i];
        if (res < sum) {
            res = sum;
        }
        if (sum < 0) {
            sum = 0;
        }
    }
    cout << res;
}