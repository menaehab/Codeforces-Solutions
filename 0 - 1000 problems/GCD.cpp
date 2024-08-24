#include <iostream>
using namespace std;
int main()
{
	int n1, n2,x;
	cin >> n1 >> n2;
	int min, max;
	if (n1 >= n2)
	{
		max = n1;
		min = n2;
	}
	else
	{
		max = n2;
		min = n1;
	}
	for (int i = 1; i <= max; i++)
	{
		if (n1 % i == 0 && n2 % i ==0)
		{
			x = i;
		}
	}
	cout << x;
}