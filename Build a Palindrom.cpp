#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    string res;
    for (int i = 0; i < (n + 1) / 2; i++) {
        res += char('a' + i); 
    }
    string rev = res;
    if (n % 2 != 0)
    {
        rev.pop_back();
    }
    reverse(rev.begin(), rev.end());
    res += rev;
    cout << res;
}
