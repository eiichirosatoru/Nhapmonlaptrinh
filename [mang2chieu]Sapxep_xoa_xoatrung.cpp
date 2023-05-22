#include <iostream>
#include <conio.h>
using namespace std;

#define MAX 100

void Nhap(int A[], int& N)
{
    cout << "Nhap so phan tu cua mang: ";
    cin >> N;

    cout << "Nhap cac phan tu cua mang: ";
    for (int i = 0; i < N; i++)
    {
        cout << "A[" << i << "] = ";
        cin >> A[i];
    }
}

void Xuat(int A[], int N)
{
    cout << "Cac phan tu cua mang: ";
    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

void Sort(int A[], int N)
{
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (A[i] > A[j])
            {
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
}

void Delete(int A[], int& N, int i)
{
    if (i >= 0 && i < N)
    {
        for (int j = i; j < N - 1; j++)
        {
            A[j] = A[j + 1];
        }
        N--;
        cout << "Da xoa phan tu thu " << i << " khoi mang." << endl;
    }
    else
    {
        cout << "Vi tri khong hop le." << endl;
    }
}

void RemoveDuplicate(int A[], int& N)
{
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (A[i] == A[j])
            {
                Delete(A, N, j);
                j--;
            }
        }
    }
    cout << "Da loai bo cac phan tu trung lap trong mang." << endl;
}

int main()
{
    int A[MAX];
    int N;

    Nhap(A, N);
    Xuat(A, N);
    Sort(A, N);
    cout << "Mang sau khi sap xep tang dan: ";
    Xuat(A, N);

    RemoveDuplicate(A, N);
    cout << "Mang sau khi loai bo cac phan tu trung lap: ";
    Xuat(A, N);

    getch();
    return 0;
}
