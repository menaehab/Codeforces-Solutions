#include <iostream>
using namespace std;
int main()
{
	string x;
	cin >> x;
	int n = x.length(),sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += int(x[i]) - '0';
	}
	cout << sum;
}