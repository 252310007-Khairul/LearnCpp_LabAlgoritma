#include <iostream>
using namespace std;

int main() {
    int total;
    cout << "Masukkan total belanja: ";
    cin >> total;

    int diskon;
    if (total >= 500000) diskon = 20;
    else if (total >= 200000) diskon = 10;
    else diskon = 0;

    int potongan = total * diskon / 100;
    int totalAkhir = total - potongan;

    cout << "Total setelah diskon: " << totalAkhir << endl;

    return 0;
}

