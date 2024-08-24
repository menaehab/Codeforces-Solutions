#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, res = 0;
    cin >> n;
    int Max = INT_MIN;
    int Min = INT_MAX;
    int minPos = 0, maxPos = 0;
    int arr[105];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] <= Min)
        {
            Min = arr[i];
            minPos = i;
        }
        if (arr[i] > Max)
        {
            Max = arr[i];
            maxPos = i;
        }
    }
    while (minPos != n - 1)
    {
        swap(arr[minPos], arr[minPos + 1]);
        minPos++;
        if (minPos != maxPos)
        {
            res++;
        }
    }
    while (maxPos != 0)
    {
        swap(arr[maxPos - 1], arr[maxPos]);
        res++;
        maxPos--;
    }
    cout << res;
}
