#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n,x,mx = 0,res = 0;
	cin >> n;
	vector<int>arr(1008, 0);
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		arr[x]++;
		mx = max(mx, arr[x]);
	}
	for (int i = 0; i < 1001; i++)
	{
		if (arr[i] > 0)
		{
			res++;
		}
	}
	cout << mx << " " << res;
}