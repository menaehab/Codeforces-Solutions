#include <iostream>
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

class Parent
{
private:
  string name;

public:
  Parent(string n) : name(n) {}
  void hello()
  {
    cout << "Hello, my name is " << name << el;
  }
};

class Child : public Parent
{
private:
  int age;

public:
  Child(string n, int a) : Parent(n), age(a) {}
  void introduce()
  {
    Parent::hello();
    cout << "I am " << age << " years old." << el;
  }
};

int main()
{
  setup();
  int t;
  cin >> t;
  while (t--)
  {
  }
  return 0;
}