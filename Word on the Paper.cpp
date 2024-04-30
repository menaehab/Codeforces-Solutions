#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		vector<vector<char>>arr(8, vector<char>(8));
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				cin >> arr[i][j];
			}
		}
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				if (arr[i][j] != '.')
				{
					cout << arr[i][j];
				}
			}
		}
		cout << endl;
	}
}