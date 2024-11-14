#include <iostream>
using namespace std;
void Swap(int a, int b) {
	cout << b << " " << a;
}
int main()
{
	int x, y;
	cin >> x >> y;
	Swap(x, y);
}
