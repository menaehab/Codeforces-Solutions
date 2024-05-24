#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string x;
	cin >> x;
	vector<int>freq(26);
	bool flag = false;
	for (int i = 0; i < n; i++)
	{
		char c;
		c = x[i];
		freq[c - 'a']++;
		if (freq[c - 'a'] > 1)
		{
			flag = true;
		}
	}
	if (flag || n == 1)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}