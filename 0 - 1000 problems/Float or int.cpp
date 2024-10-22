#include <iostream>
using namespace std;
int main()
{
	float x;
	cin >> x;
	if (x == int(x))
	{
		cout << "int " << x;
	}
	else {
		cout << "float " << int(x) << " " << x - int(x);
	}
}
