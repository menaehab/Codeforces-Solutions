#include <iostream>
#include <string>
using namespace std;
int main() {
    string x;
    cin >> x;
    int res = 0;
    while (x.size() > 1) {
        int sum = 0;
        for (int i = 0; i < x.size(); i++) {
            sum += (x[i] - '0');
        }
        x = to_string(sum); 
        res++;
    }
    cout << res;
}