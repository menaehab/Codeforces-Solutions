#include <iostream>
using namespace std;
int main() {
	string x;
	long long y;
	cin >> x >> y;
	long long res = 0;
	for (int i = 0; i < x.size(); i++) { 
		res *= 10;
		res += x[i] - '0';
		res %= y;
	}
	if (res == 0) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}