#include <iostream>
using namespace std;
int main()
{
	int x;
	cin >> x;
	if(x >=2){
		for (int i = 2; i <= x; i+=2)
		{
			cout << i << endl;
		}
	}
	else {
		cout << -1;
	}
}
