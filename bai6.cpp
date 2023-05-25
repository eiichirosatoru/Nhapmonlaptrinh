#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

// Hàm nhập ma trận
void nhapMaTran(int matrix[][MAX_SIZE], int rows, int cols) {
    cout << "Nhap cac phan tu cua ma tran:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "matrix[" << i << "][" << j << "] = ";
            cin >> matrix[i][j];
        }
    }
}

// Hàm tính tổng của hai ma trận
void tinhTongMaTran(const int matrix1[][MAX_SIZE], const int matrix2[][MAX_SIZE], int sumMatrix[][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

// Hàm xuất ma trận
void xuatMaTran(const int matrix[][MAX_SIZE], int rows, int cols) {
    cout << "Ma tran:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n, m;
    cout << "Nhap so dong cua ma tran: ";
    cin >> n;
    cout << "Nhap so cot cua ma tran: ";
    cin >> m;

    int matrix1[MAX_SIZE][MAX_SIZE];
    int matrix2[MAX_SIZE][MAX_SIZE];
    int sumMatrix[MAX_SIZE][MAX_SIZE];

    cout << "Nhap ma tran 1:\n";
    nhapMaTran(matrix1, n, m);

    cout << "Nhap ma tran 2:\n";
    nhapMaTran(matrix2, n, m);

    tinhTongMaTran(matrix1, matrix2, sumMatrix, n, m);

    cout << "Ma tran 1:\n";
    xuatMaTran(matrix1, n, m);

    cout << "Ma tran 2:\n";
    xuatMaTran(matrix2, n, m);

    cout << "Tong hai ma tran:\n";
    xuatMaTran(sumMatrix, n, m);

    return 0;
}
