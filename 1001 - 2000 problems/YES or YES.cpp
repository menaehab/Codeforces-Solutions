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
	for (int i = 0; i < x.size(); i++)
	{
		x[i] = tolower(x[i]);
	}
	if (x == "yes")
	{
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
	}
	}
}
