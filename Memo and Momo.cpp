#include <iostream>
using namespace std;
int main()
{
	long long Memo, Momo, k;
	cin >> Memo >> Momo >> k;
	if (Memo % k ==0 && Momo % k == 0)
	{
		cout << "Both";
	}
	else if(Momo % k ==0 && Memo %k !=0)
	{
		cout << "Momo";
	}
	else if (Momo % k != 0 && Memo % k == 0)
	{
		cout << "Memo";
	}
	else {
		cout << "No One";
	}
}
