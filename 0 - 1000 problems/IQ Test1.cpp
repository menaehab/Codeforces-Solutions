#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<vector<char>> arr(4, vector<char>(4));
    int test1 = 0, test2 = 0;
    bool flag = false;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++) 
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++)
        {
            test1 = 0, test2 = 0;
            if (arr[i][j] == '#')
            {
                test1++;
            }
            else
            {
                test2++;
            }
            if (arr[i][j + 1] == '#')
            {
                test1++;
            }
            else
            {
                test2++;
            }
            if (arr[i + 1][j] == '#')
            {
                test1++;
            }
            else test2++;
            if (arr[i + 1][j + 1] == '#')
            {
                test1++;
            }
            else
            {
                test2++;
            }
            if (test1 == 4 || test2 == 4 || test1 == 3 || test2 == 3) {
                flag = true;
                break;
            }
        }
        if (flag) 
        {
            break;
        }
    }
    if (flag) 
    {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}