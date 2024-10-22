#include <iostream>
using namespace std;
int main()
{
	int n, x,k = 0;
	cin >> n >> x;
	for (int i = 0; i < n; i++)
	{	
		for (int j = 0; j < n; j++)
		{
			if (k == j)
			{
				cout << x << " ";
			}
			else
			{
				cout << 0 << " ";
			}
		}
		k++;
		cout << endl;
	}
}
