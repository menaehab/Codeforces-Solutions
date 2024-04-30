#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int x;
		cin >> x;
		cout << "Case " << i << ":\n";
		if (x >= 1 and x <=5)
		{
            cout << "Languages\n";
		}
		else if (x >= 6 and x <= 7)
		{
			cout << "Read and Write\n";
		}
		else if (x >= 8 and x <= 12)
		{
			cout << "Robotics\n";
		}
		else if (x >= 13 and x <= 19)
		{
			cout << "Programming and Robotics\n";
		}
		else
		{
			cout << "Read about everything\n";
		}
	}
}
