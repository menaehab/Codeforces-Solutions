#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int  size = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] != 0) {
            size++;
        }
    }
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1){
            res++;
            size--;
        }
        else{
            if (arr[i - 1] == 1 && size != 0) {
                res++;
            }
        }
    }
    cout << res;
}