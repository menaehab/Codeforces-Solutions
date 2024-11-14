#include <iostream>
using namespace std;
int main()
{
	string x;
	cin >> x;
    int n = x.size();
    int count = 0;
    for (int i = 0; i < n; i++) {
        int flag = 0;
        for (int j = 0; j < i; j++) {
            if (x[i] == x[j]) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            count++;
        }
    }
	if (count % 2 == 0)
	{
		cout << "CHAT WITH HER!";
	}
	else {
		cout << "IGNORE HIM!";
	}
}