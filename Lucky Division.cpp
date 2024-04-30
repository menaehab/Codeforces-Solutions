#include <iostream>
#include <string>
using namespace std;
int main()
{
	string x;
	cin >> x;
	for (int i = 0; i < x.size(); i++)
	{
		if (x[i] != '4' && x[i] != '7') {
			int d = stoi(x);
			if (d % 4 != 0 && d % 7 != 0 && d % 47 != 0)
			{
				cout << "NO";
				return 0;
			}
		}
	}
	cout << "YES";
}
