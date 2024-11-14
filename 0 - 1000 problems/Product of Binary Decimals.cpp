#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> arr = { 100000, 11111, 11110, 11101, 11100, 11011, 11010, 11001, 11000, 10111, 10110, 10101, 10100, 10011, 10010, 10001, 10000, 1111, 1110, 1101, 1100, 1011, 1010, 1001, 1000, 111, 110, 101, 100, 11, 10 };
    int t;
    cin >> t;
    while (t--) 
    {
        int x;
        cin >> x;
        bool flag = true;
        int y = x;
        while (true)
        {
            int found = 0;
            for (int i = 0; i < arr.size(); i++)
            {
                int num = arr[i];
                if (x >= num) {
                    if (x % num == 0)
                    {
                        y = x;
                        x = x / num;
                        found = 1;
                        break;
                    }
                }
            }
            if (found == 0) 
            {
                if (x == 1) {
                    flag = true;
                }
                else {
                    flag = false;
                }               
                break;
            }
            else {
                if (x <= 0) 
                {
                    break;
                }
                else {
                    if (y == x) 
                    {
                        flag = false;
                        break;
                    }
                }
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}