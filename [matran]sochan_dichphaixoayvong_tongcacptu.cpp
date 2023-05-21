#include <iostream>
#include <conio.h>
using namespace std;

const int MAX_SIZE = 100;

bool kiemTraSoChan(const int matrix[][MAX_SIZE], int n, int m) 
{
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            if (matrix[i][j] % 2 == 0) 
            {
                return true;
            }
        }
    }
    return false;
}
void dichPhaiXoayVongCot(int matrix[][MAX_SIZE], int n, int m) 
{
    for (int j = 0; j < m; j++) 
    {
        int temp = matrix[n - 1][j]; // Luu gia tri ptu cuoi cung trong cot vao bien tạm

        // Dich phai cac ptu trong cot
        for (int i = n - 1; i > 0; i--) 
        {
            matrix[i][j] = matrix[i - 1][j];
        }

        matrix[0][j] = temp; // Gan gtri bien tam vao ptu dau tien cua cot
    }
}
int tinhTongDongDauVaCotDau(int matrix[][MAX_SIZE], int n, int m) 
{
    int tong = 0;

    // Tinh tong cac ptu tren dong dau
    for (int j = 0; j < m; j++) 
    {
        tong += matrix[0][j];
    }

    // Tinh tong cac ptu tren cot dau 
    for (int i = 1; i < n; i++) 
    {
        tong += matrix[i][0];
    }

    return tong;
}
int main()
{
    int matrix[MAX_SIZE][MAX_SIZE];
    int n, m;
//    int i, j;

    cout << "Nhap so dong cua ma tran: ";
    cin >> n;
    cout << "Nhap so cot cua ma tran: ";
    cin >> m;

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            cout << "Nhap phan tu thu [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    if (kiemTraSoChan(matrix, n, m)) 
    {
        cout << "Trong ma tran co so chan" << endl;
    } 
    else 
    {
        cout << "Trong ma tran khong co so chan" << endl;
    }

    dichPhaiXoayVongCot(matrix, n, m);

    cout << "Ma tran sau khi dich phai xoay vong cac cot: " << endl;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int tong = tinhTongDongDauVaCotDau(matrix, n, m);
    cout << "Tong cac phan tu tren dong dau va cot dau: " << tong << endl;
    getch();
    return 0;
}