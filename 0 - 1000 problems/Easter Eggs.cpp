#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string x = "ROYGBIV";
	string res = x;
	int t = n - 7;
	if (t == 1)
	{
		res += "G";
	}
	else if (t == 2) {
		res += "GB";
	}
	else if (t == 3) {
		res += "GBI";
	}
	else if (t == 4) {
		res += "GBIV";
	}
	else {
		while (t > 0) {
			if (t >= 4)
			{
				res += "GBIV";
				t -= 4;
			}
			else if (t == 3) {
				res += "GBI";
				t -= 3;
			}
			else if (t == 2) {
				res += "GB";
				t -= 2;
			}
			else if (t == 1)
			{
				res += "G";
				t -= 1;
			}
		}
	}
	cout << res;
}