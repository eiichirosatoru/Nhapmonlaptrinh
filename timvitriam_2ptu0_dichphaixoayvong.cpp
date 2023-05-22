#include <iostream>
#include <conio.h>
using namespace std;

const int MAX_SIZE = 100;

// tim vi tri ptu am nho nhat trong mang
int timViTriAmNhoNhat(int arr[], int size) {
    int viTri = -1; 
    double minAm = 0;
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] < 0) {
            if (viTri == -1 || arr[i] < minAm) {
                minAm = arr[i];
                viTri = i;
            }
        }
    }

    return viTri;
}

// kiem tra
bool kiemTra0LienTiep(const int arr[], int size) {
    for (int i = 0; i < size - 1; i++) 
    {
        if (arr[i] == 0 && arr[i + 1] == 0) 
        {
            return true;
        }
    }
    return false;
}

// dich phai xoay vong 
void dichPhaiXoayVong(int arr[], int size) 
{
    int temp = arr[size - 1]; // luu gia tri ptu vao cuoi bien tam

    // dich phai cac phan tu trong mang
    for (int i = size - 1; i > 0; i--) 
    {
        arr[i] = arr[i - 1];
    }

    arr[0] = temp; // gan gia tri bien tam vao ptu dau tien
}
int main() {
    int arr[MAX_SIZE];
    int size;

    cout << "Nhap so phan tu cua mang: ";
    cin >> size;

    cout << "Nhap cac phan tu cua mang: " << endl;
    for (int i = 0; i < size; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    int viTriAmNhoNhat = timViTriAmNhoNhat(arr, size);
    if (viTriAmNhoNhat != -1) {
        cout << "Vi tri phan tu am nho nhat trong mang la: " << viTriAmNhoNhat << endl;
    } else {
        cout << "Khong co phan tu am trong mang" << endl;
    }

    bool co0LienTiep = kiemTra0LienTiep(arr, size);
    if (co0LienTiep) {
        cout << "Mang co hai phan tu 0 lien tiep" << endl;
    } else {
        cout << "Mang khong co hai phan tu 0 lien tiep" << endl;
    }

    dichPhaiXoayVong(arr, size);

    cout << "Mang sau khi dich phai xoay vong: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    getch();
    return 0;
}