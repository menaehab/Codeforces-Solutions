#include <iostream>
using namespace std;
int main()
{
	long long n;
	cin >> n;
	long long x;
	cin >> x;
	while (n != x)
	{
		cout << "Unfortunately it is the wrong password, try again" << endl;
		cin >> x;
	}
	cout << "Good done Malak, here is the sweets" << endl;
}