#include <iostream>
using namespace std;
int main()
{
	float x, y;
	cin >> x >> y;
	if ((x == y / 2) || (y == x/ 2)) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}
