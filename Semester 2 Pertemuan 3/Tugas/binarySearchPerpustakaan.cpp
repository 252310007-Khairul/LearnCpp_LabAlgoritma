#include <iostream>
using namespace std;

int binarySearch(string buku[], int rak[], int left, int right, string target) {
    if (right >= left) {
        int mid = left + (right - left) / 2;

        if (buku[mid] == target) {
            return mid;
        }

        if (buku[mid] > target) {
            return binarySearch(buku, rak, left, mid - 1, target);
        }

        return binarySearch(buku, rak, mid + 1, right, target);
    }
    return -1;
}

int main() {
    string buku[5] = {"Algoritma", "Basis Data", "Jaringan", "Pemrograman", "Sistem Operasi"};
    int rak[5] = {1, 2, 3, 4, 5};

    string target;
    cout << "Masukkan judul buku: ";
    cin >> target;

    int hasil = binarySearch(buku, rak, 0, 4, target);

    if (hasil != -1) {
        cout << "Buku ditemukan di rak ke-" << rak[hasil];
    } else {
        cout << "Buku tidak ditemukan";
    }
    return 0;
}


