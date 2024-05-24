#include <iostream>
#include <vector>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    int n, x;
    cin >> n >> x;
    vector<long long> types(n);
    vector<long long> count(x + 1, 0);
    for (int i = 0; i < n; ++i) 
    {
        cin >> types[i];
        count[types[i]]++;
    }
    long long res = 0;
    for (int i = 1; i <= x; i++) 
    {
        for (int j = i + 1; j <= x;j++) 
        {
            res += count[i] * count[j];
        }
    }
    cout << res;
}