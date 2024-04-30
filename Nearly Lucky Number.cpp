#include <iostream>
using namespace std;
int main()
{
	string x;
	cin >> x;
	int res = 0;
	for (int i = 0; i < x.size(); i++)
	{
		if (x[i] == '7' || x[i] == '4') {
			res++;
		}
	}
	if (res == 7 || res == 4)
	{
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}
