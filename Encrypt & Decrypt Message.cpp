#include <iostream>
#include <string>
using namespace std;
int main() {
	int q;
	string x;
	cin >> q >> x;
	string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
	string org = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int n = x.size();
	if (q == 1)
	{
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < org.size(); j++) {
				if (x[i]==org[j])
				{
					cout << key[j];
					break;
				}
			}
		}
	}
	else {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < key.size(); j++) {
				if (x[i] == key[j])
				{
					cout << org[j];
					break;
				}
			}
		}
	}
}
