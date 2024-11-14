#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z, res = 0;
        cin >> x >> y >> z;
        vector<int> arr1(x);
        vector<int> arr2(y);
        for (int i = 0; i < x; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < y; i++)
        {
            cin >> arr2[i];
        }
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                if (arr1[i] + arr2[j] <= z)
                {
                    res++;
                }
            }
        }
        cout << res << endl;
    }
}