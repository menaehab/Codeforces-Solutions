#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n,j;
	cin >> n;
	j = n;
	vector<int>arr(n + 1);
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		arr[x] = 1;
		while (arr[j])
		{
			cout << j << " ";
			j--;
		}
		cout << endl;
	}
}