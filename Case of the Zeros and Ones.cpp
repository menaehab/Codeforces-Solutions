#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string x;
	cin >> x;
	int one = 0, zero = 0;
	for (int i = 0; i < n; i++)
	{
		if (x[i] == '1')
		{
			one++;
		}
		else
		{
			zero++;
		}
	}
	cout << max(one, zero) - min(one, zero);
}