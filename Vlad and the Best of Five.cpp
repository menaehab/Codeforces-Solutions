#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		string x;
		cin >> x;
		int A = 0, B = 0;
		for (int i = 0; i < 6; i++)
		{
			if (x[i] == 'A')
			{
				A++;
			}
			else {
				B++;
			}
		}
		if (A >= B)
		{
			cout << "A" << endl;
		}
		else {
			cout << "B" << endl;
		}
	}
}