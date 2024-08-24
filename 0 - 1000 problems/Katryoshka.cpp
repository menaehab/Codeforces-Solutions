#include <iostream>
#include <cmath>
using namespace std;
int main() {

    long long eye = 0, mouth = 0, body = 0;
    long long counter = 0;

    cin >> eye >> mouth >> body;

    long long min = std::min(std::min(eye, mouth), body);

    counter += min;
    eye -= min;
    mouth -= min;
    body -= min;

    min = std::min(eye / 2, body);

    counter += min;

    cout << counter;
}