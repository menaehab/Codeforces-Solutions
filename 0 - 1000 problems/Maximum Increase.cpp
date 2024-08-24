#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n,res = 1,sum = 1;
	cin >> n;
	vector<int>arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n - 1; i++)
	{
		if (arr[i] < arr[i + 1])
		{
			sum++;
			res = max(res, sum);
		}
		else
		{
			sum = 1;
		}
	}
	cout << res;
}