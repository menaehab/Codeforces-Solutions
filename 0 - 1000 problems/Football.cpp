#include <iostream>
using namespace std;
int main()
{
	string x;
	cin >> x;
	int one = 0;
	int zero = 0;
	for (int i = 0; i < x.size(); i++)
	{
		if (x[i] == '1')
		{
			one++;
			zero = 0;
			if (one == 7)
			{
				cout << "YES";
				return 0;
			}
		}
		else if(x[i] == '0') {
			one = 0;
			zero++;
			if (zero == 7)
			{
				cout << "YES";
				return 0;
			}
		}
	}
	cout << "NO";
}