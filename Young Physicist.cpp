#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int Tx = 0, Ty = 0, Tz = 0;
	for (int i = 0; i < n; i++)
	{
		int x, y, z;
		cin >> x >> y >> z;
		Tx += x;
		Ty += y;
		Tz += z;
	}
	if (Tx == 0 && Ty == 0 && Tz == 0)
	{
		cout << "YES";
	}
	else {
		cout << "NO";
	}

}
