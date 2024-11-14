#include <iostream>
using namespace std;
int mx;
int code(int arr[], int x, int c) {
    if (x - 1 == c) {
        mx = arr[c];  
        return 0;

    }
    code(arr, x, c + 1);
    if (mx < arr[c])
        mx = arr[c];
}
int main()
{
    int x, c = 0;
    cin >> x;
    int arr[x];
    for (int i = 0; i < x; i++) {
        cin >> arr[i];
    }
    code(arr, x, c);
    cout << mx;
}