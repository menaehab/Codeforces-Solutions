#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int A = 0, D = 0;
	for (int i = 0; i < n; i++)
	{
		char x;
		cin >> x;
		if (x == 'A')
		{
			A++;
		}
		else
		{
			D++;
		}
	}
	if (A > D)
	{
		cout << "Anton";
	}
	else if (A < D) {
		cout << "Danik";
	}
	else if (A == D) {
		cout << "Friendship";
	}
}
