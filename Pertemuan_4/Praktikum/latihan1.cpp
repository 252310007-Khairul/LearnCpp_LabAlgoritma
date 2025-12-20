#include <iostream>
using namespace std;

int main()
{
    double tot_beli, potongan = 0, jum_bayar;
    // cirscr();
    cout << "Masukkan total pembelian : ";
    cin >> tot_beli;

    if (tot_beli > 50000)
    {
        potongan = 0.2 * tot_beli;
        cout << "Besarnya Potongan Rp. " << potongan << endl;
        jum_bayar = tot_beli - potongan;
        cout << "Jumlah yang harus dibayar : " << jum_bayar << endl;
    }
    getchar();
}
