#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n,res = 0;
	cin >> n;
	vector<int>arr(n,-1);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i != j)
			{
				if (arr[i] == arr[j])
				{
					arr[i] = -1;
				}
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > 0)
		{
			res++;
		}
	}
	cout << res << endl;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > 0)
		{
			cout << arr[i] << " ";
		}
	}

}