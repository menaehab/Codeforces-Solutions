#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[105];
	int flag = true;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (arr[i] == 1)
		{
			flag = false;
		}
	}
	if (flag)
	{
		cout << "EASY";
	}
	else {
		cout << "HARD";
	}
}
