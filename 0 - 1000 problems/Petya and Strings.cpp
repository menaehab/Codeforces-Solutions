#include <iostream>
#include <string>
using namespace std;
int main()
{
	string x, y;
	cin >> x >> y;
	for (int i = 0; i <= x.size(); i++)
	{
		int A = tolower(x[i]);
		int B = tolower(y[i]);
		if (A > B) {
			cout << 1;
			return 0;
		}
		else if (A<B) {
			cout << -1;
			return 0;
		}
	}
	cout << 0;
}