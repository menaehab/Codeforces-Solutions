#include <iostream>
using namespace std;
int main()
{
	long long x, y, z;
	cin >> x >> y >> z;
	long long test = z % 3;
	if (test == 1)
	{
		cout << x;
	}
	else if(test == 2){
		cout << y;
	}
	else {
		cout << (x ^ y);
	}
}
