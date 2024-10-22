#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void func(int t) {
	if (t < 1)
	{
		return;
	}
    long long x;
    cin >> x;
    string res = "";
    while (x > 0)
    {
        long long r = x % 2;
        char z;
        if (r < 10)
        {
            z = r + '0';
        }
        else
        {
            z = r - 10 + 'A';
        }
        res += z;
        x /= 2;
    }
    reverse(res.begin(), res.end());
    cout << res << endl;
	func(t - 1);
}
int main()
{
	int n;
	cin >> n;
	func(n);
}