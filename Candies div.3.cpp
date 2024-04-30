#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int x,i = 2,y = 0;
		cin >> x;
		while (true)
		{
			y = pow(2, i) - 1;
			i++;
			if (x % y == 0)
			{
				cout << x / y << endl;
				break;
			}
		}
	}
}