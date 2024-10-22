#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		char x;
		cin >> x;
		if (x == 'c' || x == 'o' || x == 'd' || x == 'e' || x == 'f' || x == 's' || x == 'r')
		{
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
}