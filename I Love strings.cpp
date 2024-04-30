#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--) {
        string s, r;
        cin >> s >> r;
        for (int i = 0; i < max(s.size(), r.size()); i++)
        {
            if (i < s.size())
                cout << s[i];
            if (i < r.size())
                cout << r[i];

        }
        cout << endl;
    }
}