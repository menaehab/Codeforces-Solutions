#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    string x;
    cin >> x;
    vector<int> arr(500, 0);
    for (int i = 0; i < x.size(); i++)
    {
        arr[x[i]]++;
    }
    for (char i = 'A'; i <= 'Z'; i++)
    {
        if (arr[i] > 0)
        {
            cout << i << " " << arr[i] << endl;
        }
    }
    for (char i = 'a'; i <= 'z'; i++)
    {
        if (arr[i] > 0)
        {
            cout << i << " " << arr[i] << endl;
        }
    }
}
