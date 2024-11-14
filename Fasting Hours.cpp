#include <iostream>
using namespace std;
int main()
{
	int x;
	string y;
	cin >> x >> y;
	if (y == "am")
	{
		cout << 18 - x;
	}
	else
	{
		cout << 6 - x;
	}
}