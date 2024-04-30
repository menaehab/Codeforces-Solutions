#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<pair<int, int>> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i].first >> arr[i].second;
	}
	sort(arr.begin(), arr.end());
	bool flag = true;
	for (int i = 0; i < n - 1; i++) {
		if (arr[i].second > arr[i + 1].second) 
		{
			cout << "Happy Alex";
			flag = false;
			break;
		}
	}
	if (flag) {
		cout << "Poor Alex";
	}
}