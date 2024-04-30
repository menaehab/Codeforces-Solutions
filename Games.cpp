#include <iostream>
using namespace std;
int main()
{
	int arr1[35];
	int arr2[35];
	int res = 0;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr1[i] >> arr2[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			
			if (i != j && arr1[i] ==arr2[j])
			{
				res++;
			}
		}
	}
	cout << res;
}
