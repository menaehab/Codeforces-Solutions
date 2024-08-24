#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int res = 0;
		vector<vector<char>> arr(10, vector<char>(10));
		vector<vector<char>> poi{
			{1,1,1,1,1,1,1,1,1,1},
			{1,2,2,2,2,2,2,2,2,1},
			{1,2,3,3,3,3,3,3,2,1},
			{1,2,3,4,4,4,4,3,2,1},
			{1,2,3,4,5,5,4,3,2,1},
			{1,2,3,4,5,5,4,3,2,1},
			{1,2,3,4,4,4,4,3,2,1},
			{1,2,3,3,3,3,3,3,2,1},
			{1,2,2,2,2,2,2,2,2,1},
			{1,1,1,1,1,1,1,1,1,1},
		};
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				cin >> arr[i][j];
			}
		}
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				if (arr[i][j] == 'X')
				{
					res += poi[i][j];
				}
			}
		}
		cout << res << endl;
	}
}