#include <iostream>
#include <string>
using namespace std;
string add(const string& num1, const string& num2)
{
    string res = "";
    int temp = 0;
    int i = num1.size() - 1;
    int j = num2.size() - 1;
    while (i >= 0 || j >= 0 || temp)
    {
        int x = (i >= 0) ? num1[i] - '0' : 0;
        int y = (j >= 0) ? num2[j] - '0' : 0;
        int sum = x + y + temp;
        temp = sum / 10;
        sum %= 10;
        res = to_string(sum) + res;
        i--;
        j--;
    }
    return res;
}
string multi(const string& num, int digit)
{
    string res = "";
    int temp = 0;
    for (int i = num.size() - 1; i >= 0; i--)
    {
        int prdct = (num[i] - '0') * digit + temp;

        temp = prdct / 10;
        prdct %= 10;
        res = to_string(prdct) + res;
    }
    while (temp > 0)
    {
        res = to_string(temp % 10) + res;
        temp /= 10;
    }
    return res;
}
int main()
{
    string x;
    cin >> x;
    string res1 = add(x, "9999");
    string res2 = multi(x, 9999);
    cout << res1 << endl;
    cout << res2 << endl;
}
