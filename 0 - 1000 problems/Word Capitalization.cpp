#include <iostream>
using namespace std;
int main()
{
	string X;
	cin >> X;
	if (X[0] >= 97 && X[0] <= 122)
	{
		X[0] = char(X[0] - 32);
	}
	cout << X;
}
