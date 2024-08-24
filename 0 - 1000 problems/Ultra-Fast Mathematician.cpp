#include <iostream>
using namespace std;
int main()
{
	string x, y;
	cin >> x >> y;
	for (int i = 0; i < x.size(); i++)
	{
		
		if (x[i] == '0' && y[i] == '1')
		{
			cout << 1;
		}
		else if (x[i] == '1' && y[i] == '0')
		{
			cout << 1;
		}
		else if (x[i] == '0' && y[i] == '0')
		{
			cout << 0;
		}
		else if (x[i] == '1' && y[i] == '1')
		{
			cout << 0;
		}
	}
}
