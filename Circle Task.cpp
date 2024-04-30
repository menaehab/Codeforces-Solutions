#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x, y, r, n;
	cin >> x >> y >> r >> n;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		if (pow((a - x),2)+pow((b-y),2) <= pow(r,2))
		{
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
}
