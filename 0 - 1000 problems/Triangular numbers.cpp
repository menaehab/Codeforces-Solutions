#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> arr = {
        0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55, 66, 78, 91, 105, 120, 136, 153, 171, 190, 210, 231, 253, 276, 300, 325, 351, 378, 406, 435,  465, 496
    };
    bool flag = false;
    for (int i : arr) {
        if (i == n) {
            flag = true;
            break;
        }
    }
    if (flag) 
    {
        cout << "YES\n";
    }
    else 
    {
        cout << "NO\n";
    }
}
