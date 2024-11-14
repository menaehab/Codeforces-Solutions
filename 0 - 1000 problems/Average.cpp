#include <iostream>
#include<iomanip>
using namespace std;
double avarage(int n, double Arr[]) {
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += Arr[i];
	}
	cout << fixed << setprecision(7);
	cout << sum/n;
}
int main()
{
	int x;
	cin >> x;
	double arr[x];
	for (int i = 0; i < x; i++)
	{
		cin >> arr[i];
	}
	avarage(x, arr);
}
