#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<vector<char>>arr(n, vector<char>(n));
	bool flag = true;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}
	char x = arr[0][0], y = arr[0][1];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (x == y)
			{
				flag = false;
				break;
			}
			else if(arr[i][i] != x || arr[i][n - i - 1] != x)
			{
				flag = false;
				break;
			}
			else if (arr[i][j] != y)
			{
				if (j != i && j != n-i-1)
				{
					flag = false;
					break;
				}
			}
		}
	}
	if (flag)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}