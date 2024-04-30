#include <iostream>
using namespace std;
int main()
{
	string x, y;
	int res = 1,index = 0;
	cin >> x >> y;
	for (int i = 0; i < y.size(); i++)
	{
		if (x[index] == y[i])
		{
			res++;
			index++;
		}
	}
	cout << res;
}