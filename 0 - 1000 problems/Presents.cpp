#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[105];
	for (int i = 1; i <= n; i++)
	{
		int x;
		cin >> x;
		arr[x] = i;
	}
	for (int i = 1; i <= n ; i++)
	{
		cout << arr[i] << " ";
	}
}