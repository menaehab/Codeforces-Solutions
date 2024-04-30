#include <iostream>
using namespace std;
int main()
{
	int r, c,test = 0;
	cin >> r >> c;
	int arr[105][105];
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cin >> arr[i][j];
		}
	}
	int x;
	cin >> x;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (arr[i][j] == x)
			{
				test = 1;
				break;
			}
		}
	}
	if (test == 1)
	{
		cout << "will not take number";
	}
	else {
		cout << "will take number";
	}
}
