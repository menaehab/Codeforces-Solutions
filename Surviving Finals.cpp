#include <iostream>
using namespace std;
int main()
{
	long long x, y, z;
	string o, c;
	cin >> x >> o >> y >> c >> z;
	if (o == "+" && c == "=")
	{
		if (x + y == z)
		{
			cout << "YES";
		}
		else {
			cout << "NO";
		}
	}
	else if (o == "+" && c == ">") {
		if (x + y > z)
		{
			cout << "YES";
		}
		else {
			cout << "NO";
		}
	} else if (o == "+" && c == "<"){
		if (x + y < z)
		{
			cout << "YES";
		}
		else {
			cout << "NO";
		}
	} else if (o == "-" && c == "=")
	{
		if (x - y == z)
		{
			cout << "YES";
		}
		else {
			cout << "NO";
		}
	}
	else if (o == "-" && c == ">") {
		if (x - y > z)
		{
			cout << "YES";
		}
		else {
			cout << "NO";
		}
	}
	else if (o == "-" && c == "<") {
		if (x - y < z)
		{
			cout << "YES";
		}
		else {
			cout << "NO";
		}
	} else if (o == "*" && c == "=")
	{
		if (x * y == z)
		{
			cout << "YES";
		}
		else {
			cout << "NO";
		}
	}
	else if (o == "*" && c == ">") {
		if (x * y > z)
		{
			cout << "YES";
		}
		else {
			cout << "NO";
		}
	}
	else if (o == "*" && c == "<") {
		if (x * y < z)
		{
			cout << "YES";
		}
		else {
			cout << "NO";
		}
	}
}