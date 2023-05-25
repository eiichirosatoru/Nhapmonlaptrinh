#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

// Hàm nhập ma trận
void NhapMaTran(int matrix[][MAX_SIZE], int rows, int cols) {
    cout << "Nhap cac phan tu cua ma tran:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "A[" << i << "][" << j << "] = ";
            cin >> matrix[i][j];
        }
    }
}

// Hàm xuất ma trận
void XuatMaTran(int matrix[][MAX_SIZE], int rows, int cols) {
    cout << "Ma tran:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// Hàm tìm ma trận chuyển vị
void MaTranChuyenVi(const int matrix[][MAX_SIZE], int rows, int cols, int result[][MAX_SIZE]) {
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            result[i][j] = matrix[j][i];
        }
    }
}

int main() {
    int matrixA[MAX_SIZE][MAX_SIZE];
    int matrixAT[MAX_SIZE][MAX_SIZE];
    int rows, cols;

    cout << "Nhap so hang cua ma tran: ";
    cin >> rows;
    cout << "Nhap so cot cua ma tran: ";
    cin >> cols;

    NhapMaTran(matrixA, rows, cols);
    XuatMaTran(matrixA, rows, cols);

    MaTranChuyenVi(matrixA, rows, cols, matrixAT);
    XuatMaTran(matrixAT, cols, rows);

    return 0;
}
