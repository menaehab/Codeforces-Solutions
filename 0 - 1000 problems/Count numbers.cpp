#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n, t;
	cin >> n >> t;
	vector<pair <int, int>>arr(t);
	vector<int>freq(n + 1,0);
	for (int i = 0; i < t; i++)
	{
		cin >> arr[i].first >> arr[i].second;
	}
	for (int i = 0; i < t; i++)
	{
		if (arr[i].first == 1)
		{
			int x = arr[i].second;
			freq[x]++;
		}
		else
		{
			cout << freq[arr[i].second] << endl;
		}
	}
}