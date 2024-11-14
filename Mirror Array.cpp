#include <iostream>
using namespace std;
int main()
{
	int arr[105][105];
	int x, y;
	cin >> x >> y;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < x; i++)
	{
		for (int j = y - 1; j >= 0; j--)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
