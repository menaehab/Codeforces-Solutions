#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		int res = 0, k = 0;
		for (int i = n - 1; i >= 0; i--)
		{
			
			if (arr[i] == 'B')
			{
				k++;
			}
			else {
				if (k != 0)
				{
					res += k;
					arr[i] = 'B';
					i++;
				}
			}
		}
		cout << res << endl;
	}
}
