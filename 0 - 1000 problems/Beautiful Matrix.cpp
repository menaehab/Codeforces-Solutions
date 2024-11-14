#include <iostream>
using namespace std;
int main()
{
	int num;
	int sum;
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5; j++) {
			cin >> num;
			if (num == 1){
				sum = abs(i - 3) + abs(j - 3);
			}
		}
	}
	cout << sum;
}