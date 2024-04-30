#include <iostream>
using namespace std;
int main()
{
	char x;
	cin >> x;
	if (int(x) != 122)
	{
		cout << char(x + 1);
	}
	else
	{
		cout << "a";
	}
}
