#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        bool isprime = false;
        int nums[N];
        int indnum = 0;
        for (int i = 0; i < N; ++i) {
            int ai;
            cin >> ai;
            bool prime = true;
            if (ai <= 1) {
                prime = false;
            }
            else {
                for (int j = 2; j * j <= ai; ++j) {
                    if (ai % j == 0) {
                        prime = false;
                        break;
                    }
                }
            }
            if (prime) {
                isprime = true;
                nums[indnum++] = ai;
            }
        }
        if (isprime) {
            sort(nums, nums + indnum);

            for (int i = 0; i < indnum; ++i) {
                cout << nums[i] << " ";
            }
        }
        else {
            cout << -1;
        }
        cout << endl;
    }
}
