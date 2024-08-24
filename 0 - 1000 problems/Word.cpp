#include <iostream>
using namespace std;
int main()
{
	string x;
	cin >> x;
	int upper = 0, lower = 0;
	for (int i = 0; i < x.size(); i++)
	{
		if (x[i] >= 65 && x[i] <= 90)
		{
			upper++;
		}
		else {
			lower++;
		}
	}
	if (upper > lower )
	{
		
		for (int i = 0; i < x.size(); i++)
		{
			if (x[i] >= 97 && x[i] <= 122) {
				cout << char(x[i] - 32);
			}
			else {
				cout << x[i];
			}
		}
	}
	else {
		for (int i = 0; i < x.size(); i++)
		{
			if (x[i] >= 65 && x[i] <= 90) {
				cout << char(x[i] + 32);
			}
			else {
				cout << x[i];
			}
		}
	}
}
