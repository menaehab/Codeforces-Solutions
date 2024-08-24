#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string x,txt= "codeforces";
		cin >> x;
		int res = 0;
		for (int i = 0; i < txt.size(); i++)
		{
			
			if (x[i] != txt[i])
			{
				res++;
			}
		}
		cout << res << endl;
	}
}