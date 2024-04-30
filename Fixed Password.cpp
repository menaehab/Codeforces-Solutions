#include <iostream>
using namespace std;
int main()
{
	int correct = 1999;
	int x;
	cin >> x;
	while (correct != x)
	{
		cout << "Wrong" << endl;
		cin >> x;
	}
	cout << "Correct";
}
