#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    while (q--) {
        string x;
        cin >> x;
        if (x == "pop_back") {
            s.pop_back();
        }
        else if (x == "front") {
            cout << s.front() << endl;
        }
        else if (x == "back") {
            cout << s.back() << endl;
        }
        else if (x == "sort") {
            int l, r;
            cin >> l >> r;
            if (l > r) {
                swap(l, r);
            }
            sort(s.begin() + l - 1, s.begin() + r);
        }
        else if (x == "reverse") {
            int l, r;
            cin >> l >> r;
            if (l > r) {
                swap(l, r);
            }
            reverse(s.begin() + l - 1, s.begin() + r);
        }
        else if (x == "print") {
            int pos;
            cin >> pos;
            cout << s[pos - 1] << endl;
        }
        else if (x == "substr") {
            int l, r;
            cin >> l >> r;
            if (l > r) {
                swap(l, r);
            }
            cout << s.substr(l - 1, r - l + 1) << endl;
        }
        else if (x == "push_back") {
            char c;
            cin >> c;
            s.push_back(c);
        }
    }
}