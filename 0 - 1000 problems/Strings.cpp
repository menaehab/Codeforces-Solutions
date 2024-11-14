#include <iostream>
#include <string>
using namespace std;
int main()
{
	string x, y;
	cin >> x >> y;
	cout << x.length() << " " << y.length() << endl;
	cout << x + y << endl;
	cout << y[0] << x.substr(1) << " " << x[0] << y.substr(1) << endl;
}