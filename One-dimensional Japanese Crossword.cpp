#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n,res = 0,k = 0;
	string x;
	cin >> n >> x;
	vector<int>arr(n);
	for (int i = 0; i < n; i++)
	{
		if (x[i] == 'B')
		{
			res++;
		}
		else
		{
			if (res != 0)
			{
				arr[k] = res;
				res = 0;
				k++;
			}
		}
	}
	if (res != 0)
	{
		arr[k] = res;
		res = 0;
		k++;
	}
	cout << k << endl;
	for (int i = 0; i < k; i++)
	{
		cout << arr[i] << " ";
	}
}
