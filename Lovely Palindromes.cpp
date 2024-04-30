#include <iostream>
using namespace std;
int main()
{
	string x;
	cin >> x;
	for (int i = 0; i < x.size(); i++)
	{
		cout << x[i];
	}
	for (int i = x.size() - 1; i >= 0; i--)
	{
		cout << x[i];
	}
}
