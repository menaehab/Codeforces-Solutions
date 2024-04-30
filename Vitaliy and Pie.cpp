#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	map<char, int>dic;
	char x, y;
	for (int i = 0; i < n-1; i++)
	{
		cin >> x >> y;
		if (toupper(x) != y)
		{
			if (dic.size() <= 0 ||dic.find(x) == dic.end())
			{
				dic[x] = 1;
			}
			else if (dic.size() > 0 && (dic.find(x) != dic.end()))
			{
				auto z = dic.find(x);
				z->second++;
			}
			for (auto j = dic.begin(); j != dic.end(); j++)
			{
				if (toupper(j->first == y) && (j->second != 0))
				{
					j->second--;
					break;
				}
			}
		}
	}
	int sum = 0;
	for (auto i = dic.begin(); i != dic.end(); i++)
	{
		sum += i->second;
	}
	cout << sum;
}
