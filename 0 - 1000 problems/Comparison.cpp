#include <iostream>
using namespace std;
int main()
{
	int x, y;
	string s;
	cin >> x >> s >> y;
	if (s == ">")
	{
		if (x > y) {
			cout << "Right";
		} else
		{
			cout << "Wrong";
		}
	}else if(s == "<") {
		if (x < y) {
			cout << "Right";
		} else {
			cout << "Wrong";
		}
	}else if (s == "=") {
		if (x != y) {
			cout << "Wrong";
		}
		else if (x == y) {
			cout << "Right";
		}
	}
}