#include <iostream>
using namespace std;
int main()
{
	string x, y;
	cin >> x >> y;
	for (int i = 0; i < x.size(); i++)
	{
		if (x[i] != y[y.size() - i - 1])
		{
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
}
