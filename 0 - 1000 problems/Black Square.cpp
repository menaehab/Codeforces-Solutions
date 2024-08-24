#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d,res = 0;
	cin >> a >> b >> c >> d;
	string x;
	cin >> x;
	for (int i = 0; i < x.size(); i++)
	{
		if (x[i] == '1')
		{
			res += a;
		}
		else if (x[i] == '2')
		{
			res += b;
		}
		else if (x[i] == '3')
		{
			res += c;
		}
		else if (x[i] == '4')
		{
			res += d;
		}
	}
	cout << res;
}
