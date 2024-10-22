#include <iostream>
using namespace std;
int main()
{
	int x, y, res = 1;
	cin >> x >> y;
	while ((res * x) % 10 != 0 && (res * x) % 10 != y)
	{
		res++;
	}
	cout << res;
}
