#include <iostream>
using namespace std;
int main()
{
	int n,res = 0,y = 0;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		if (x > 0)
		{
			y += x;
		}
		else if(x < 0) {
			if (y == 0)
			{
				res += abs(x);
			}
			else {
				y += x;
			}
		}
	}
	cout << abs(res);
}
