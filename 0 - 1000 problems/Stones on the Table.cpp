#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string arr;
	int res = 0;
	cin >> arr;
	for (int i = 0; i < n; i++) {
		if (arr[i] == arr[i + 1]) {
			res++;
		}
	}
	cout << res;
}