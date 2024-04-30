#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n,res = 0,sum = 0;
	cin >> n;
	vector<int>arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		sum = 0;
		for (int j = 0; j < n; j++)
		{
			if (i != j)
			{
				sum += arr[j];
			}
		}
		if (sum % 2 == 0)
		{
			res++;
		}
	}
	cout << res;
}