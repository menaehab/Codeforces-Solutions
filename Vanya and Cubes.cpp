#include <iostream>
using namespace std;
int main()
{
	int x,y = 0,res = 0;
	cin >> x;
	while (y <= x) {
		res++;
		y += res * (res + 1) / 2; 
	}
	res--;
	cout << res;
}