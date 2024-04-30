#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
    while (t--) {
        int n, res = 0;
        cin >> n;
        for (int i = 0; i < 2 * n; i++) {
            int x;
            cin >> x;
            if (x % 2 == 1) 
                res++;
        }
        if (res == n)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
