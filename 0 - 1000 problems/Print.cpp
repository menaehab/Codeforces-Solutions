#include <iostream>
using namespace std;
void count(int x) {
	for (int i = 1; i <= x - 1; i++)
	{
		cout << i << " ";
	}
	cout << x;
}
int main()
{
	int n;
	cin >> n;
	count(n);
}
