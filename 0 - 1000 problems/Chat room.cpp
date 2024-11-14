#include <iostream>
using namespace std;
int main()
{
	string x;
	cin >> x;
	string test = "hello";
	int flag = 0;
	for (int i = 0; i < x.size(); i++)
	{
			if (x[i] == test[flag])
			{
				flag++;
			}
			if (flag == 5)
			{
				cout << "YES";
				return 0;
			}
	}
		cout << "NO";
}
