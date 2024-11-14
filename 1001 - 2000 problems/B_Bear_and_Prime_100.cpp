#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <iomanip>
#include <string>
#include <set>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#define ll long long
#define el '\n'
#define all(arr) arr.begin(), arr.end()
#define allr(arr) arr.rbegin(), arr.rend()
#define pi 3.14159265358979323846
using namespace std;
void setup()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
string ask(int x)
{
    cout << x << el;
    cout.flush();
    string ret;
    cin >> ret;
    return ret;
}
const int sz = 1e6 + 10;
bool composite[sz];
vector<ll> primes;
void sieve()
{
    composite[0] = composite[1] = true;
    for (int i = 2; i * i <= sz; i++)
    {
        if (!composite[i])
        {
            for (int j = i * i; j <= sz; j += i)
            {
                composite[j] = true;
            }
        }
    }
}
void linearSieve(int n)
{
    composite[0] = composite[1] = true;
    for (int i = 2; i <= n; i++)
    {
        if (!composite[i])
        {
            primes.push_back(i);
        }
        for (int j = 0; j < primes.size(); j++)
        {
            if (i * primes[j] > n)
            {
                break;
            }
            composite[i * primes[j]] = true;
            if (i % primes[j] == 0)
            {
                break;
            }
        }
    }
}
int main()
{
    setup();
    linearSieve(53);
    int cnt = 0;
    int p = -1;
    bool flag = false;
    for (int i = 0; i < primes.size(); i++)
    {
        if (primes[i] > 50)
            break;
        if (ask(primes[i]) == "yes")
        {
            cnt++;
            p = primes[i];
        }
        if (cnt == 2)
        {
            flag = true;
            break;
        }
    }
    if (flag)
        cout << "composite" << el;
    else if (cnt == 1)
    {
        if (p * p <= 100 && ask(p * p) == "yes")
            cout << "composite" << el;
        else
            cout << "prime" << el;
    }
    else
        cout << "prime" << el;
    return 0;
}