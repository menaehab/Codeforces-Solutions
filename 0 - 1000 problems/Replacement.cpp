#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		if (x > 0)
		{
			cout << 1 << " ";
		}
		else if (x < 0){
			cout << 2 << " ";
		}
		else {
			cout << 0 << " ";
		}
	}
}
