#include <iostream>
using namespace std;
int main()
{
	long long x, y, z;
	cin >> x >> y >> z;
	cout << max(x, max(y, z));
}
