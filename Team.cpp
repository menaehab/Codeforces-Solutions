#include <iostream>
using namespace std;
int main()
{
	int size;
	int count = 0;
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		int n1, n2, n3;
		cin >> n1 >> n2 >> n3;
		int sum = n1 + n2 + n3;
		if (sum >= 2)
		{
			count++;
		}
	}
	cout << count;
}