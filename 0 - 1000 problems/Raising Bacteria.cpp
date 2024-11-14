#include <iostream>
using namespace std;
int main()
{
    int x, res = 0, i = 1;
    cin >> x;
	while (x > 0)
	{
		if (x % 2 == 1)
		{
			res++;
		}
		x /= 2;
	 }
	cout << res;
}