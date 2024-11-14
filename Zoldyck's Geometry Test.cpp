#include <iostream>
#include <cmath>
using namespace std;
const float pi = 3.141592653;
int main() {
    int R, S;
    cin >> R >> S;
    double diagonal = sqrt(2.0) * S; 
    double diameter = 2.0 * R;

    if (diagonal <= diameter) {
        cout << "Circle" << endl;
    }
    else if (diameter <= S) {
        cout << "Square" << endl;
    }
    else {
        cout << "Complex" << endl;
    }
}