#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	long long n, x,res = 0;
	cin >> n >> x;
	vector<long long>arr(n);
	for (long long i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end(), greater<int>());
	for (long long i = 0; i < x; i++)
	{
		res += arr[i];
	}
	cout << res;
}
