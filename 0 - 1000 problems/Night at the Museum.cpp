#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    string x;
    cin >> x;
    int res = 0, index = 0;
    for (int i = 0; i < x.size(); i++) {
        int z = x[i] - 'a';
        int x = (z - index + 26) % 26; 
        int y = (index - z + 26) % 26; 
        res += min(x, y); 
        index = z; 
    }
    cout << res;
}
