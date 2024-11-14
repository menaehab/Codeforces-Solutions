#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int max = n;
	for (int i = 1; i <= n; i++)
	{
		if (max == 1 && n == 1) {
			cout << "I hate it";
		}
		else if (max % 2 == 0)
		{
			if (i == n)
			{
				cout << "I love it";
			}
			else if (i % 2 != 0)
			{
				cout << "I hate that ";
			}
			else if (i % 2 == 0) {
				cout << "I love that ";
			}
		}
		else if (max % 2 != 0)
		{
			if (i == n)
			{
				cout << "I hate it";
			}
			else if (i % 2 != 0)
			{
				cout << "I hate that ";
			}
			else if (i % 2 == 0) {
				cout << "I love that ";
			}
		}
	}
}