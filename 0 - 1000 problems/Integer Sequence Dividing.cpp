#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if (n % 4 == 3 || n % 4 == 0)
	{
		cout << "0";
	}
	else {
		cout << "1";
	}
}
