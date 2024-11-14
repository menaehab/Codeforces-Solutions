#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int res = 0;
	for (int i = 0; i < n; i++)
	{
		string x;
		cin >> x;
		if (x == "Icosahedron")
		{
			res += 20;
		}
		else if (x == "Dodecahedron")
		{
			res += 12;
		}
		else if (x == "Octahedron")
		{
			res += 8;
		}
		else if (x == "Cube")
		{
			res += 6;
		}
		else if (x == "Tetrahedron")
		{
			res += 4;
		}
	}
	cout << res;
}
