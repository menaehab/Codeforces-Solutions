#include <iostream>
using namespace std;
int arr[1000000];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		arr[i] = x;
	}
	for (int j = n - 1; j >= 0; j--)
	{
		cout << arr[j] << " ";
	}
}
