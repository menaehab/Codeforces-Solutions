#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	cin >> n;
    string x;
    cin >> x;
    int arr[26] = { 0 };
	if (n < 26)
	{
		cout << "NO";
	}
	else {
        int arr[26] = { 0 };
        for (int i = 0; i < n; ++i) {
            char letter = x[i];
            if (isalpha(letter)) {
                arr[tolower(letter) - 'a'] = 1;
            }
        }
        bool flag = true;
        for (int i = 0; i < 26; ++i) {
            if (arr[i] == 0) {
                flag = false;
                break;
            }
        }
        if (flag) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }
	}
}
