#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if (n >= 95)
	{
		cout << "A";
	}
	else if (n < 95 && n >= 85) {
		cout << "A-";
	} 
	else if (n < 85 && n >= 80) {
		cout << "B";
	}
	else if (n < 80 && n >= 75) {
		cout << "B-";
	}
	else if (n < 75 && n >= 70) {
		cout << "C";
	}
	else if (n < 70 && n >= 65) {
		cout << "C-";
	}
	else if (n < 65 && n >= 60) {
		cout << "D";
	}
	else if (n < 60 && n >= 45) {
		cout << "D-";
	}
	else if (n < 45)
	{
		cout << "F";
	}
}
