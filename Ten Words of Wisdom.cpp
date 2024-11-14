#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> arr(n, vector<int>(2));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> arr[i][j];
            }
        }
        int mx = -1;
        int res = -1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i][0] <= 10) 
            {
                if (arr[i][1] > mx) 
                {
                    mx = arr[i][1];
                    res = i;
                }
            }
        }
        cout << res + 1 << endl; 
    }
}