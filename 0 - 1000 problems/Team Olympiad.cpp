#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr1(n), arr2(n), arr3(n);
    int one = 0, two = 0, three = 0;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            arr1[one++] = i;
        }
        else if (x == 2)
        {
            arr2[two++] = i;
        }
        else
        {
            arr3[three++] = i;
        }
    }
    int res = min(one, min(two, three));
    cout << res << endl;
    for (int i = 0; i < res; i++)
    {
        cout << arr1[i] << " " << arr2[i] << " " << arr3[i] << endl;
    }
}
