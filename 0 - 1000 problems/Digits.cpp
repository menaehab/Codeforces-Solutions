#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string x;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		for (int j = size(x) -1; j >= 0; j--)
		{
			cout << x[j];
			cout << " ";
		}
		cout << endl;
	}
}
