#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int arr[105] = { 0 };
	int index;
	cin >> index;
	for (int i = 0; i < index; i++)
	{
		int x;
		cin >> x;
		arr[x] = 1;
	}
	cin >> index;
	for (int i = 0; i < index; i++)
	{
		int y;
		cin >> y;
		arr[y] = 1;
	}
	for (int i = 1; i <= n; i++)
	{
		if (arr[i] != 1) {
			cout << "Oh, my keyboard!";
			return 0;
		}
	}
	cout << "I become the guy.";
}