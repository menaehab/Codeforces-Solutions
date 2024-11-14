#include <iostream>
using namespace std;
int main() {
	int n, x, y;
	string txt;
	cin >> n >> txt;
	for (int i = 0; i < n; i++)
	{
		if (txt[i] != '.')
		{
			x = 1 + i;
			break;
		}
	}
	for (int i = x - 1; i < n; i++)
	{
		if (txt[i] == 'L')
		{
			y = i;
			break;
		}
		if (txt[i] == '.')
		{
			y = i + 1;
			break;
		}
	}
	cout << x << " " << y;
}