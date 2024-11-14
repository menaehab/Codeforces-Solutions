#include <iostream>
using namespace std;
int main()
{
    int t, res = 0;
    cin >> t;
    int arr[100005];
    for (int i = 0; i < t; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < t; i++)
    {
        if (arr[i] != arr[i + 1]) {
            res++;
        }
    }
    cout << res;
}
