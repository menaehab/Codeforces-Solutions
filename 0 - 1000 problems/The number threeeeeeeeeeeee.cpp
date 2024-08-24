#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int res = 0;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int x;
	cin >> x;
	for (int i = 0; i < n; i++)
	{
		if ((arr[i] + x) % 3 == 0)
		{
			res++;
		}
	}
	cout << res;
}
