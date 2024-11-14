#include <iostream>
using namespace std;
int main()
{
	int t;
	string x;
	cin >> t;
	while (t--)
	{
		cin >> x;
		for (int i = 1; i <= 8; i++)
		{
			if (i != x[1] - '0')
			{
				cout << x[0] << i << endl;
			}
		}
		for (int i = 97; i < 105; i++)
		{
			if (char(i) != x[0])
			{
				cout << char(i) << x[1] << endl;
			}
		}
	}
}