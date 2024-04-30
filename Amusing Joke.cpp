#include <iostream>
using namespace std;
int main()
{
	string x, y, z;
	cin >> x >> y >> z;
	int temp;
	int arr1[1005] = { 0 };
	int arr2[1005] = { 0 };
	bool flag = true;
	if (x.size() + y.size() == z.size())
	{
		for (int i = 0; i < x.size(); i++)
		{
			temp = x[i] - 'A';
			arr1[temp] += 1;
		}
		for (int i = 0; i < y.size(); i++)
		{
			temp = y[i] - 'A';
			arr1[temp] += 1;
		}
		for (int i = 0; i < z.size(); i++)
		{
			temp = z[i] - 'A';
			arr2[temp] += 1;
		}
		for (int i = 0; i < z.size(); i++)
		{
			if (arr1[i] != arr2[i])
			{
				flag = false;
				break;
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
	else {
		cout << "NO";
	}
	
}