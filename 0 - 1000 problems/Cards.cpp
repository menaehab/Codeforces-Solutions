#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, sum = 0, p, mx, res1, res2;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    p = (n / 2);
    mx = sum / p;
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] != -1) 
        {
            res1 = i + 1;
            for (int j = i + 1; j < n; j++) 
            {
                if (arr[j] != -1 && arr[i] + arr[j] == mx) 
                {
                    res2 = j + 1;
                    cout << res1 << " " << res2 << endl;
                    arr[i] = -1;
                    arr[j] = -1;
                    break;
                }
            }
        }
    }
}
