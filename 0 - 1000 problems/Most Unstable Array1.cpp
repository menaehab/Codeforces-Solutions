#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int x, y;
		cin >> x >> y;
		if (x == 1)
		{
			cout << "0\n";
		}
		else if(x == 2)
		{
			cout << y << endl;
		}
		else {
			cout << y * 2 << endl;
		}
	}
}