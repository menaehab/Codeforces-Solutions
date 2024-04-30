#include <iostream>
using namespace std;
int main()
{
	double x, y;
	cin >> x >> y;
	if (x == 0 && y != 0) {
		cout << "Eixo Y";
	}
	else if (y == 0 && x != 0) {
		cout << "Eixo X";
	}
	else if (x == 0 && y == 0) {
		cout << "Origem";
	}
	else if (x > 0 && y > 0){
		cout << "Q1\n";
	}
	else if (x < 0 && y > 0){
		cout << "Q2\n";
	}
	else if (x < 0 && y < 0){
		cout << "Q3\n";
	}
	else {
		cout << "Q4\n";
	}
}