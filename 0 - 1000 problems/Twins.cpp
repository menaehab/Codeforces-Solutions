#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n,sum = 0,res = 0,count = 0;
	cin >> n;
	vector<int>arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	sort(arr.begin(), arr.end(), greater<int>());
	for (int i = 0; i < n; i++)
	{
		res += arr[i];
		count++;
		if (res > sum / 2)
		{
			break;
		}
	}
	cout << count;
}
