#include <iostream>
using namespace std;
int main()
{
	int x,res= 0;
	cin >> x;
	if (x < 2)
	{
		cout << "-1";
	}
	else {
		cout << x / 2 << endl;
		while (x > 0)
		{

			if (x == 3)
			{
				x -= 3;
				cout << 3;
				break;
			}
			else if (x >= 2)
			{
				x -= 2;
				cout << 2 << " ";
			}
		}
	}
}
