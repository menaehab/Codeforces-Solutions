#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
    while (n--) {
        string x;
        cin >> x;
        int zero = 0;
        int one = 0;
        for (int i = 0; i < x.size(); i++) {
            if (x[i] == '0') {
                zero++;
            }
            else if (x[i] == '1') {
                one++;
            }
        }
        for (int i = 0; i < x.size(); i++) {
            if (x[i] == '0') {
                if (one != 0) {
                    one--;
                }
                else {
                    break;
                }
            }
            else if (x[i] == '1') {
                if (zero != 0) {
                    zero--;
                }
                else {
                    break;
                }
            }
        }
        cout << one + zero << endl;
    }
}
