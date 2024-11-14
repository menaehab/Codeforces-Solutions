#include <iostream>
using namespace std;
int main()
{
	int x, y;
	cin >> x >> y;
	if ((x <= 5 && y <= 5) || (x <= 6 && y <= 5) || (x <= 5 && y <= 6))
	{
		cout << "Yay!";
	}
	else
	{
		cout << ":(";
	}
}