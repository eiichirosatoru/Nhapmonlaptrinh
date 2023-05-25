#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

void NhapMaTran(int matrix[][MAX_SIZE], int rows, int cols) {
    cout << "Nhap cac phan tu cua ma tran:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "matrix[" << i << "][" << j << "] = ";
            cin >> matrix[i][j];
        }
    }
}

void TinhTichMaTran(int matrixA[][MAX_SIZE], int rowsA, int colsA, int matrixB[][MAX_SIZE], int rowsB, int colsB, int matrixC[][MAX_SIZE]) {
    if (colsA != rowsB) {
        cout << "Khong the nhan hai ma tran nay!";
        return;
    }

    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            matrixC[i][j] = 0;
            for (int k = 0; k < colsA; k++) {
                matrixC[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
}

void XuatMaTran(int matrix[][MAX_SIZE], int rows, int cols) {
    cout << "Ma tran:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rowsA, colsA;
    cout << "Nhap so hang cua ma tran A: ";
    cin >> rowsA;
    cout << "Nhap so cot cua ma tran A: ";
    cin >> colsA;

    int matrixA[MAX_SIZE][MAX_SIZE];
    NhapMaTran(matrixA, rowsA, colsA);

    int rowsB, colsB;
    cout << "Nhap so hang cua ma tran B: ";
    cin >> rowsB;
    cout << "Nhap so cot cua ma tran B: ";
    cin >> colsB;

    int matrixB[MAX_SIZE][MAX_SIZE];
    NhapMaTran(matrixB, rowsB, colsB);

    int matrixC[MAX_SIZE][MAX_SIZE];

    TinhTichMaTran(matrixA, rowsA, colsA, matrixB, rowsB, colsB, matrixC);

    XuatMaTran(matrixC, rowsA, colsB);

    return 0;
}
