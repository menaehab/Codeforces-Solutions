#include <iostream>
using namespace std;
void func(int a, string b) {
	for (int i = 0; i < a - 1; i++)
	{
		cout << b << " ";
	}
	cout << b << endl;
}
int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int n;
		string x;
		cin >> n >> x;
		func(n, x);
	}
}