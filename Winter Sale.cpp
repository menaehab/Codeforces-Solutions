#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float dis, after,before;
	cin >> dis >> after;
	before = (after/100)/(1 - (dis/100)) * 100;
	cout << fixed << setprecision(2);
	cout << before;
}
