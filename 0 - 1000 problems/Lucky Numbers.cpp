#include <iostream>
using namespace std;
int main()
{
	string x;
	cin >> x;
	int num1 = x[0] - '0';
	int num2 = x[1] - '0';
	if (num2 == 0) {
		cout << "YES";
		return 0;
	}
	if (num1 % num2 == 0 || num2 % num1 == 0) {
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}