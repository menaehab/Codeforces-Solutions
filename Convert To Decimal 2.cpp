#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int t, n, sum, counter; cin >> t;
	while (t--) {
		sum = 0;
		counter = 0;
		cin >> n;
		while (n > 0) {
			if (n % 2) {
				sum += pow(2, counter);
				counter++;
			}
			n /= 2;
		}
		cout << sum << endl;
	}
}