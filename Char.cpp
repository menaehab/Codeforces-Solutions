#include <iostream>
using namespace std;
int main()
{
	char x;
	cin >> x;
	if (int(x) >= 65 && int(x) <= 90)
	{
		cout << char(int(x) +32 );
	}
	else if (int(x) >= 96 && int(x) <= 122)
	{
		cout << char(int(x) - 32);
	}
}
