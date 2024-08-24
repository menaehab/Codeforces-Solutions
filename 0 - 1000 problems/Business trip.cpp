#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int x,sum = 0,res = 0;
	bool flag = false;
	vector<int>arr(12);
	cin >> x;
	for (int i = 0; i < 12; i++)
	{
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end(), greater<int>());
	for (int i = 0; i <= 12; i++)
	{
		if (sum >= x)
		{
			flag = true;
			break;
		}
		sum += arr[i];
		res++;
	}
	if (flag)
	{
		cout << res;
	}
	else
	{
		cout << -1;
	}
}