#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
void fuck(int arr[],int n) {
	sort(arr, arr + n);
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] != arr[i + 1]) {
			count++;
		}
	}
	cout << count;
}
int main()
{
	int t;
	cin >> t;
	int a[1005];
	for (int i = 0; i < t; i++)
	{
		cin >> a[i];
	}
	fuck(a, t);
}
