#include <iostream>
using namespace std;
int main()
{
	int n;
	int arr[105];
	int odd = 0, even = 0, oddindex = 0, evenindex = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 1; i <= n; i++)
	{
		if (arr[i] % 2 ==0)
		{
			even++;
			evenindex = i;
		} 
		else {
			odd++;
			oddindex = i;
		}
	}
	if (even == 1)
	{
		cout << evenindex;
	}
	else {
		cout << oddindex;
	}
}