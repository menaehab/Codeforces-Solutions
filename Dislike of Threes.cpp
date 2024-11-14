#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
        int x,index = 0,res = 1;
        cin >> x;
		while (x > index)
		{
			if (res % 3 != 0 && res % 10 != 3)
			{
				index++;
			}
			if (x == index)
			{
				cout << res << endl;
				break;
			}
			res++;
		}
	}
}