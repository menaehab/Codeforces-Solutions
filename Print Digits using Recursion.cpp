#include <iostream>
using namespace std;
void func(int t){
	if (t < 1)
	{
		return;
	}
	string x;
	cin >> x;
	for (int i = 0; i < x.size(); i++)
	{
		cout << x[i] << " ";
	}
	cout << endl;
	func(t - 1);

}
int main()
{
	int n;
	cin >> n;
	func(n);
}
