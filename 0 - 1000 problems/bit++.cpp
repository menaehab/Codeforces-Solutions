#include <iostream>
using namespace std;

int main()
{
	int n;
	int x=0;
	cin >> n;
	while (n--)
	{
		string operation;
		cin >> operation;
		if (operation == "++X" || operation == "X++")
		{
			x++;
		}
		else
		{
			x--;
		}
	}
	cout << x << endl;
}
