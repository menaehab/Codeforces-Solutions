#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, res = 0, j = 0;
        cin >> n >> m;
        string x, y;
        cin >> x >> y;
        for (int i = 0; i < m && j < n; i++) 
        {
            if (x[j] == y[i]) 
            {
                res++;
                j++;
            }
        }
        cout << res << endl;
    }
}