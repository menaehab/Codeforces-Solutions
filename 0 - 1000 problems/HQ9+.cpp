#include <iostream>
using namespace std;
int main()
{
	string x;
	cin >> x;
	bool flag = false;
	for (int i = 0; i < x.size(); i++)
	{
		if (x[i] == 'H' || x[i] == 'Q' || x[i] == '9')
		{
			flag = true;
			break;
		}
	}
	if (flag)
	{
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}
