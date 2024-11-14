#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	long long res = 0;
	for (int i = 1; i <= n; i++)
	{
		res += i * 2;
	}
	cout << res;
}
