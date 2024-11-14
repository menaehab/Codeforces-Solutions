#include <iostream>
#include <cmath>
using namespace std;
void fuck1(int arr[],int n) {
	int Min = INT_MIN;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > Min) {
			Min = arr[i];
		}
	}
	cout << "The maximum number : " << Min << endl;
}
void fuck2(int arr[], int n) {
	int Max = INT_MAX;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < Max) {
			Max = arr[i];
		}
	}
	cout << "The minimum number : " << Max << endl;
}
void fuck3(int arr[], int n) {
	int res = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i]==1)
		{
			res++;
		}
		for (int j = 2; j <= sqrt(arr[i]); j++)
		{
			if (arr[i] % j == 0) {
				res++;
				break;
			}
		}
	}
	cout << "The number of prime numbers : " << n - res << endl;
}
void fuck4(int arr[], int n) {
	int res = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < 10)
		{
			res++;
		} else if (arr[i] == 100)
		{

		}
		else if (arr[i] >=10 ) {
			int temp = arr[i];
			int digit = temp % 10;
			int ten = temp / 10;
			int rev = (digit * 10) + ten;
			if (rev == temp)
			{
				res++;
			}
		}
	}
	cout << "The number of palindrome numbers : " << res << endl;
}
void fuck5(int arr[], int n) {
	int temp, max = 0, div = 0;
	for (int i = 0; i < n; i++)
	{
		temp = 0;
		for (int d = 2; d * d <= arr[i]; d++)
		{
			if (arr[i] % d == 0) {
				temp++;
				int x = arr[i] / d;
				if (x != d)
				{
					temp++;
				}
			}
		}
		if (temp > div)
		{
			max = arr[i];
			div = temp;
		}
		else if (temp == div)
		{
			if (max < arr[i])
			{
				max = arr[i];
			}
		}
	}
	cout << "The number that has the maximum number of divisors : " << max << endl;
}
int main()
{
	int T;
	cin >> T;
	int A[105];
	for (int i = 0; i < T; i++)
	{
		cin >> A[i];
	}
	fuck1(A, T);
	fuck2(A, T);
	fuck3(A, T);
	fuck4(A, T);
	fuck5(A, T);
}