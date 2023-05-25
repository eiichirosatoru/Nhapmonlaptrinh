#include <iostream>
#include <vector>
using namespace std;

// Hàm kiểm tra số nguyên tố
bool kiemTraSoNguyenTo(int n) {
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Nhap so luong phan tu cua mang: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Nhap cac phan tu cua mang:\n";
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    vector<int> le, chan, nguyenTo, khongNguyenTo;
    int tongLe = 0, tongChan = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            chan.push_back(arr[i]);
            tongChan += arr[i];
        } else {
            le.push_back(arr[i]);
            tongLe += arr[i];
        }

        if (kiemTraSoNguyenTo(arr[i]))
            nguyenTo.push_back(arr[i]);
        else
            khongNguyenTo.push_back(arr[i]);
    }

    cout << "Cac so le: ";
    for (int i = 0; i < le.size(); i++) {
        cout << le[i] << " ";
    }
    cout << "\nTong cac so le: " << tongLe << endl;

    cout << "Cac so chan: ";
    for (int i = 0; i < chan.size(); i++) {
        cout << chan[i] << " ";
    }
    cout << "\nTong cac so chan: " << tongChan << endl;

    cout << "Cac so nguyen to: ";
    for (int i = 0; i < nguyenTo.size(); i++) {
        cout << nguyenTo[i] << " ";
    }
    cout << endl;

    cout << "Cac so khong phai la nguyen to: ";
    for (int i = 0; i < khongNguyenTo.size(); i++) {
        cout << khongNguyenTo[i] << " ";
    }
    cout << endl;

    return 0;
}
