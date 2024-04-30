#include <iostream>
using namespace std;
int main()
{
	string x;
	cin >> x;
	int odd = 0, even = 0;
	for (int i = 0; i < x.size(); i++)
	{
		if ((x[i] - '0') % 2 == 0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	cout << "Even : " << even << endl << "Odd : " << odd;
}