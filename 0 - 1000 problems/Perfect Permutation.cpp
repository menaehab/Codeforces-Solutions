#include <iostream>
using namespace std;
int main()
{
	int x;
	cin >> x;
	if (x % 2 != 0)
	{
		cout << "-1";
	}
	else {
		for (int i = 2; i <= x; i+=2)
		{
			cout << i << " " << i - 1 << " ";
		}
	}
}