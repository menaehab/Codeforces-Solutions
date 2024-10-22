#include <iostream>
#include <string>
using namespace std;
int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    int res = 0;
    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] == 'V') {
            res += 5;
        }
        else if (S[i] == 'W')
        {
            res += 2;
        }
        else if (S[i] == 'X')
        {
            i++;
        }
        else if (S[i] == 'Y' && i + 1 < S.size())
        {
            S.push_back(S[i + 1]);
            i++;
        }
        else if (S[i] == 'Z' && i + 1 < S.size())
        {
            if (S[i + 1] == 'V')
            {
                res /= 5;
                i++;
            }
            else if (S[i + 1] == 'W')
            {
                res /= 2;
                i++;
            }
        }
    }
    cout << res << endl;
}