#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--) {
		string x;
		cin >> x;
		int res = (x[0] - '0') + (x[2] - '0');
		cout << res << endl;
	}
}