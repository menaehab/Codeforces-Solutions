#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int t = 0;
	for (int i = 1; i <= n-1; i++)
	{
		if (n % i == 0)
		{
			t++;
		}
	}
	if (t == 1) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	
}
