#include <iostream>
using namespace std;
int main()
{
	string x;
	cin >> x;
	for (int i = 0; i < x.size(); i++)
	{
		if (x[i] != 'A' && x[i] != 'E' && x[i] != 'I' && x[i] != 'O' && x[i] != 'Y' && x[i] != 'U' && x[i] != 'a' && x[i] != 'e' && x[i] != 'i' && x[i] != 'o' && x[i] != 'y' && x[i] != 'u')
		{
			if (x[i] >= 65 && x[i] <= 90)
			{
				x[i] = char(x[i] + 32);
			}
			cout << "." << x[i];
		}

	}
}