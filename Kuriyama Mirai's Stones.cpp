#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n, t, l, r, x;
    cin >> n;
    vector<long long> arr(n + 1);
    vector<long long> sum(n + 1, 0);
    vector<long long> sorted(n + 1);
    vector<long long> pre(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        sum[i] = sum[i - 1] + arr[i];
        sorted[i] = arr[i];
    }
    sort(sorted.begin(), sorted.end());
    for (int i = 1; i <= n; i++) 
    {
        pre[i] = pre[i - 1] + sorted[i];
    }
    cin >> t;
    while (t--) 
    {
        cin >> x >> l >> r;
        if (x == 1) 
        {
            cout << sum[r] - sum[l - 1] << endl;
        }
        else 
        {
            cout << pre[r] - pre[l - 1] << endl;
        }
    }
}
