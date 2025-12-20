#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int banyakJenis;

    cout << "GEROBAK FRIED CHICKEN \n";
    cout << "------------------------\n";
    cout << "Kode  Jenis     Harga\n";
    cout << "D     Dada      Rp. 2500\n";
    cout << "P     Paha      Rp. 2000\n";
    cout << "S     Sayap     Rp. 1500\n\n";

    cout << "Banyak jenis : ";
    cin >> banyakJenis;

    char kode[20];
    string nama[20];
    int harga[20], jumlah[20], total[20];

    for (int i = 0; i < banyakJenis; i++) {
        cout << "\nJenis ke-" << i + 1 << endl;

        cout << "Kode potong (D/P/S) : ";
        cin >> kode[i];

        cout << "Banyak potong       : ";
        cin >> jumlah[i];

        if (kode[i] == 'D' || kode[i] == 'd') {
            nama[i] = "Dada";
            harga[i] = 2500;
        }
        else if (kode[i] == 'P' || kode[i] == 'p') {
            nama[i] = "Paha";
            harga[i] = 2000;
        }
        else if (kode[i] == 'S' || kode[i] == 's') {
            nama[i] = "Sayap";
            harga[i] = 1500;
        }
        else {
            nama[i] = "Kode Salah";
            harga[i] = 0;      
        }

        total[i] = harga[i] * jumlah[i];
    }

	cout << "\n\n";  
	cout << setw(40) << "GEROBAK FRIED CHICKEN" << endl;
    cout << "--------------------------------------------------------------\n";
    cout << left << setw(5) << "No"
         << setw(15) << "Jenis Potong"
         << setw(15) << "Harga Satuan"
         << setw(15) << "Banyak Beli"
         << setw(15) << "Jumlah Harga" << endl;
    cout << "--------------------------------------------------------------\n";

    int totalBayar = 0;

    for (int i = 0; i < banyakJenis; i++) {
        cout << left << setw(5) << i + 1
             << setw(15) << nama[i]
     		 << "Rp " << setw(12) << harga[i]
             << setw(15) << jumlah[i]
     		 << "Rp " << setw(12) << total[i]
             << endl;

        totalBayar += total[i];
    }

    float pajak = totalBayar * 0.10;
    float grandTotal = totalBayar + pajak;

    cout << "--------------------------------------------------------------\n";
	cout << "Jumlah Bayar : Rp " << totalBayar << endl;
	cout << "Pajak 10%    : Rp " << pajak << endl;
	cout << "Total Bayar  : Rp " << grandTotal << endl;

    return 0;
}


