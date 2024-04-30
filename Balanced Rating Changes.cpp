#include <iostream>
using namespace std;
void print(int t)
{
	bool flag = true;
	while (t--)
	{
		float x;
		cin >> x;
		if (x / 2 == int(x/2))
		{
			cout << int(x / 2) << endl;
		}
		else
		{
			if (flag)
			{
				cout << int((x / 2) - .5) << endl;
				flag = false;
			}
			else
			{			
				cout << int((x / 2) + .5) << endl;
				flag = true;
			}
		}
	}
}
int main()
{
	int hello_world;
	cin >> hello_world;
	print(hello_world);
}