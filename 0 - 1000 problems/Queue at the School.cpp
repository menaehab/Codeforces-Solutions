#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n, t;
	string x;
	cin >> n >> t >> x;
	while (t--)
	{
		for (int i = 0; i < n - 1; i++)
		{
			if (x[i] == 'B' && x[i + 1] == 'G')
			{
				swap(x[i], x[i + 1]);
				i++;
			}
		}
	}
	cout << x;
}