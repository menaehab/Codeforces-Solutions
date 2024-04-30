#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int>arr(n);
	vector<int>freq(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i != j &&arr[i] > arr[j])
			{
				freq[i]++;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << freq[i] << " ";
	}
}