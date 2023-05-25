#include <iostream>
using namespace std;

void NhapMang(int arr[], int n) {
    cout << "Nhap cac phan tu cua mang:\n";
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
}

void DaoNguocMang(int arr[], int n) {
    int left = 0;
    int right = n - 1;
    while (left < right) {
        // Swap
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        // Di chuyen hai con tro
        left++;
        right--;
    }
}

void XuatMang(int arr[], int n) {
    cout << "Mang sau khi dao nguoc: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Nhap so luong phan tu cua mang: ";
    cin >> n;

    int arr[n];
    NhapMang(arr, n);

    DaoNguocMang(arr, n);

    XuatMang(arr, n);

    return 0;
}
