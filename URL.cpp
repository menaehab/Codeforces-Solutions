#include <iostream>
using namespace std;
int main()
{
    string url;
    int test = 0;
    cin >> url;
    for (int i = 0; i < url.size(); i++) {
        if (url[i] == '?') {
            test = 1;
            i++;
        }
        if (test) {
            if (url[i] == '&') {
                cout << endl;
                continue;
            }
            if (url[i] == '=') {
                cout << ": ";
                continue;
            }
            cout << url[i];
        }
    }
}