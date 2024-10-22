#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	char x;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		if (int(x) >= 48 && int(x) <= 57) {
			cout << "digit" << endl;
		}
		else if (int(x) >= 97 && int(x) <= 122)
		{
			cout << "lowercase letter" << endl;
		}
		else if (int(x) >= 65 && int(x) <= 90) {
			cout << "uppercase letter" << endl;
		}
	}
}