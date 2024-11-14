#include <iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	long long x;
	cin >> x;
	cout << x << " " << x - 1 << " " << x - 2 << " " << x - 3 << '\n'
		<< x - 11 << " " << x - 12 << " " << x - 13 << " " << x - 4 << " " << '\n'
		<< x - 10 << " " << x - 15 << " " << x - 14 << " " << x - 5 << '\n'
		<< x - 9 << " " << x - 8 << " " << x - 7 << " " << x - 6;
}
