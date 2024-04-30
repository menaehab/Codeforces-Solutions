#include <iostream>
#include <map>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<string, int> arr;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        arr[x]++;
    }
    string res;
    int mx = 0;
    for (auto const& pair : arr)
    {
        if (pair.second > mx)
        {
            mx = pair.second;
            res = pair.first;
        }
    }
    cout << res;
}