#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<string> arr(n);
    for (int i = 0; i < n; ++i) 
    {
        cin >> arr[i];
    }
    bool flag = false;
    for (int i = 0; i < n; i++) 
    {
        string& x = arr[i];
        for (int j = 0; j < 4; j++) 
        {
            if (x[j] == 'O' && x[j + 1] == 'O') 
            {
                x[j] = '+';
                x[j + 1] = '+';
                flag = true;
                break;
            }
        }
        if (flag)
        {
            break;
        }
    }
    if (flag)
    {
        cout << "YES\n";
        for (const string& x : arr) {
            cout << x << endl;
        }
    }
    else
    {
        cout << "NO\n";
    }
}
