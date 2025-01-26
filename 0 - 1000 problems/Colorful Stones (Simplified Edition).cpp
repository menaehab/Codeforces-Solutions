#include <iostream>
using namespace std;
int main()
{
	string x, y;
	int res = 1, idx = 0;
	cin >> x >> y;
	for (int i = 0; i < y.size(); i++)
	{
		if (x[idx] == y[i])
		{
			res++;
			idx++;
		}
	}
	cout << res;
}