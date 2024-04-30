#include <iostream>
using namespace std;
void func(int n) {
	if (n < 2)
	{
		return;
	}
	cout << n << " ";
	func(n - 1);
}
int main()
{
	int x;
	cin >> x;
	func(x);
	cout << 1;
}
