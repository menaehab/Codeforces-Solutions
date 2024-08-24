#include <iostream>
using namespace std;
void fuck(int arr1[], int arr2[],int x) {
	for (int i = 0; i < x; i++)
	{
		cin >> arr1[i];
	}
	for (int i = 0; i < x; i++)
	{
		arr2[i];
	}
	for (int i = 0; i < x; i++)
	{
		cout << arr2[i] << " ";
	}
	for (int i = 0; i < x - 1; i++)
	{
		cout << arr1[i] << " ";
	}
	cout << arr1[x - 1];
}
int main()
{
	int t;
	cin >> t;
	int a[t];
	int b[t];
	for (int i = 0; i < t; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < t; i++)
	{
		cin >> b[i];
	}
	fuck(a, b, t);
}
