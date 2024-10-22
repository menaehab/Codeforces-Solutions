#include <iostream>
#include <string>
using namespace std;
int main()
{
	string x;
	cin >> x;
	string arr[1000];
	int test = 0;
	int n = x.size();
	int l = 0, r = 0;
	string res = "";
	for (int i = 0; i < n; i++)
	{
		if (x[i] == 'L')
		{
			l++;
		}
		else {
			r++;
		}
		res.push_back(x[i]);
		if (l == r) {
			arr[test] = res;
			res = "";
			test++;
			l = 0, r = 0;
		}
	}
	cout << test << endl;
	for (int i = 0; i < test; i++)
	{
		cout << arr[i] << endl;
	}
}