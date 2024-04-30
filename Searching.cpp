#include <iostream>
using namespace std;
int arr[1000000];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		arr[i] = num;
 	}
	int x;
	cin >> x;
	for (int j = 0; j < n; j++)
	{
		if (arr[j] == x)
		{
			cout << j;
			return 0;
		}
	}
	cout << -1;
}
