#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int main()
{
    int n, k, res = -1;
    cin >> n >> k;
    vector<int> arr(n);
    map<int, int> freq;
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
        freq[arr[i]]++;
    }
    for (int i = -k; i <= k; ++i) 
    {
        if (!freq[i]) {
            res = i;
            break;
        }
    }
    cout << res;
}