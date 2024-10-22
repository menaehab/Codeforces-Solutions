#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    size_t pos = 0;
    while ((pos = s.find("EGYPT", pos)) != string::npos) {
        s.replace(pos, 5, " ");
    }
    cout << s << endl;
}
