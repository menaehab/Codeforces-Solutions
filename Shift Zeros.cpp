#include <iostream>
using namespace std;
void fuck(int arr[], int n) {
	int zeros = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] != 0) {
			cout << arr[i] << " ";
		}
		else
		{
			zeros++;
		}
	}
	for (int i = 0; i < zeros; i++)
	{
		cout << "0 ";
	}
}
int main()
{
	int t;
	cin >> t;
	int a[10005];
	for (int i = 0; i < t; i++)
	{
		cin >> a[i];
	}
	fuck(a, t);
}
