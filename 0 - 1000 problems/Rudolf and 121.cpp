#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> arr[i];
        }
        bool flag = true;
        for (int i = 0; i < n - 2; i++) {
            if (arr[i] == 0)
            {
                continue;
            }
            else if (arr[i] < 0)
            {
                flag = false;
            }
            else
            {
                arr[i + 1] -= 2 * arr[i];
                arr[i + 2] -= arr[i];
                arr[i] = 0;
            }
        }
        if (flag && arr[n - 1] == 0 && arr[n - 2] == 0) 
        {
            cout << "YES\n";
        }
        else 
        {
            cout << "NO\n";
        }
    }
}