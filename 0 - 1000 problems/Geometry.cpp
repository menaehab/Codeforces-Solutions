#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		if (x == y)
		{
			cout << "Square" << endl;
		}
		else {
			cout << "Rectangle" << endl;
		}
	}
}
