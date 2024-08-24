#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string x;
		cin >> x;
		if (x == "abc" || x == "acb" || x == "bac" || x == "cba")
		{
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
}
