#include <iostream>
#include <string>
using namespace std;
int main()
{
	string x;
	bool k = true;
	while (getline(cin,x))
	{
		bool flag = false;
		if (x.size() == 0 ||x == " ")
		{
			continue;
		}
		for (int i = 0; i < x.size(); i++)
		{
			if (x[i] == '/' && x[i+1] == x[i + 1] == '/' && k)
			{
				break;
			}
			else if (x[i] == '/' && x[i + 1] == '*')
			{
				i++;
				k = false;
			}
			else if (x[i] == '*' && x[i + 1] == '/' && !k)
			{
				i++;
				k = true;
			}
			else if(k)
			{
				cout << x[i];
				flag = true;
			}
		}
		if (flag && k)
		{
			cout << endl;
		}
	}
}