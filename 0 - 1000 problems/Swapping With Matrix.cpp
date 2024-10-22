#include <iostream>
using namespace std;
void swapRows(int matrix[][500], int x, int y, int N) {
    for (int j = 0; j < N; ++j) {
        swap(matrix[x - 1][j], matrix[y - 1][j]);
    }
}
void swapColumns(int matrix[][500], int x, int y, int N) {
    for (int i = 0; i < N; ++i) {
        swap(matrix[i][x - 1], matrix[i][y - 1]);
    }
}
void printMatrix(int matrix[][500], int N) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int N, X, Y;
    cin >> N >> X >> Y;
    int matrix[500][500];
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> matrix[i][j];
        }
    }
    swapRows(matrix, X, Y, N);
    int x = X;  
    X = Y;  
    Y = x;
    swapColumns(matrix, X, Y, N);
    printMatrix(matrix, N);
}
