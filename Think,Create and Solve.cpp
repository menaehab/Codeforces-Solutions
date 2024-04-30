#include <iostream>
using namespace std;
int main()
{
	int x;
	cin >> x;
	if (x == 2)
	{
		cout << 1 << endl << 2;
	}
	else {
		if (x % 2 != 0)
		{
			cout << x / 2 << endl;
			for (int i = 0; i < (x / 2) - 1; i++)
			{
				cout << "2 ";
			}
			cout << "3";
		}
		else
		{
			cout << x / 2 << endl;
			for (int i = 0; i < (x / 2) - 1; i++)
			{
				cout << "2 ";
			}
			cout << "2";

		}
		
	}

}
