#include <iostream>
using namespace std;
int main()
{
	char test;
	string k = "qwertyuiopasdfghjkl;zxcvbnm,./";
	cin >> test;
	if (test == 'R')
	{
		string x;
		cin >> x;
		for (int i = 0; i < x.size(); i++)
		{
			for (int j = 0; j < k.size(); j++)
			{
				if (x[i] == k[j])
				{
					cout << k[j - 1];
				}
			}
		}
	}
	else
	{
		string x;
		cin >> x;
		for (int i = 0; i < x.size(); i++)
		{
			for (int j = 0; j < k.size(); j++)
			{
				if (x[i] == k[j])
				{
					cout << k[j + 1];
				}
			}
		}
	}
}