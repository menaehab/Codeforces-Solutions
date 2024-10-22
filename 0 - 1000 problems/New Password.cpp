#include <iostream>
#include <string> 
using namespace std;
int main()
{
	string x = "abcdefghijklmnopqrstuvwxyz";
	int n, k;
	cin >> n >> k;
	string y = x.substr(0, k);
	cout << y;
	int i = 0,t = n - k;
	while(t--)
	{
		cout << y[i];
		i++;
		if (i == y.size())
		{
			i = 0;
		}
	}
}
