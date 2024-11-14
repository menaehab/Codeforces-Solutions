#include <iostream>
using namespace std;
int main()
{
	string x;
	cin >> x;
	for (int i = 0; i < x.length(); i++)
	{
		if (x[i] == ',')
		{
			cout << " ";
		} else if (char(x[i]) >= 65 && char(x[i]) <= 90) {
			cout << char(x[i] + 32);
		}
		else if (char(x[i]) >= 91 && char(x[i]) <= 122) {
			cout << char(x[i] - 32);
		}
	}
}