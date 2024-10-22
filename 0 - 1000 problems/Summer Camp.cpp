#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include<iomanip>
#include <string>
#define speedup ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define el "\n"
#define all(arr) arr.begin(), arr.end()
#define allr(arr) arr.rbegin(), arr.rend()
using namespace std;
int main()
{
	speedup;
	int n;
	cin >> n;
	string txt = "";
	for (int i = 0; i <= 1000; i++)
	{
		string x = to_string(i);
		txt += x;
	}
	cout << txt[n];
}