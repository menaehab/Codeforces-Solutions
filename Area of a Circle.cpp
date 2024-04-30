#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	float radius;
	double  area;
	cin >> radius;
	area = radius * radius * (3.141592653);
	cout << fixed << setprecision(9);
	cout << area;
}
