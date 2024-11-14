#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> arr(n * 2);
    vector<int> copy(n * 2);
    for (int i = 0; i < n * 2; i++) 
    {
        cin >> arr[i];
        copy[i] = arr[i];
    }
    for (int i = 0; i < n * 2; i += 2) 
    {
        if (arr[i] != arr[i + 1]) 
        {
            cout << "rated";
            return 0;
        }
    }
    bool flag = false;
    sort(copy.begin(), copy.end(), greater<int>());
    for (int i = 0; i < n * 2; i++) 
    {
        if (arr[i] != copy[i]) 
        {
            flag = true;
            break;
        }
    }
    if (!flag) 
    {
        cout << "maybe";
    }
    else 
    {
        cout << "unrated";
    }
}