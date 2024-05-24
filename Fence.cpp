#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n,x,mx = 15000001,res,index = 0;
	cin >> n >> x;
	vector<int>arr(150005);
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
		arr[i] += arr[i - 1];
	}
	for (int i = x; i <= n; i++)
	{
		if (mx > arr[i] - arr[i - x])
		{
			mx = arr[i] - arr[i - x];
			index = i;
		}
	}
	res = index - x + 1;
	cout << res;
}