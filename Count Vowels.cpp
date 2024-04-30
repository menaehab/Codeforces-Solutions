#include <iostream>
#include <string>
using namespace std;
int counter = 0;
int print(string s, int index)
{
	if (index > s.size() - 1)
		return 0;
	if (s[index] == 'a' || s[index] == 'e' || s[index] == 'i' || s[index] == 'o' || s[index] == 'u' || s[index] == 'A' || s[index] == 'E' || s[index] == 'I' || s[index] == 'O' || s[index] == 'U')
		counter++;
	print(s, ++index);
}
int main()
{
	string s;
	getline(cin, s);
	print(s, 0);
	cout << counter;
}