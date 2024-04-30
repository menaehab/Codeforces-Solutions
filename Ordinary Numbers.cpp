#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int x,res = 0;
		cin >> x;
		for (int i = 1; i <= 9; ++i) {
			long long sum = i;
			while (sum <= x) {
				sum = sum * 10 + i;
				res++;
			}
		}
		cout << res << endl;
	}
}