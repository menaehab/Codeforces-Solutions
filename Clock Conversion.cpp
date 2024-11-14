#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string x;
        cin >> x;
        int h = (x[0] - '0') * 10 + (x[1] - '0');
        int m = (x[3] - '0') * 10 + (x[4] - '0');
        string flag;
        if (h < 12)
        {
            flag = "AM";
        }
        else {
            flag = "PM";
        }
        if (h == 0) {
            h = 12;
        }
        else if (h > 12) {
            h -= 12;
        }
        string a;
        if (h < 10) {
            a = "0";
            a += to_string(h);
        }
        else {
            a = to_string(h);
        }
        string b;
        if (m < 10) {
            b = "0";
            b += to_string(m);
        }
        else {
            b = to_string(m);
        }
        cout << a << ":" + b << " " << flag << endl;
    }
}