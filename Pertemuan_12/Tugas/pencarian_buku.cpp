#include <iostream>
using namespace std;

struct Buku {
    string judul;
    string penulis;
    int tahun;
};

int main() {
    Buku buku[3] = {
        {"Laskar Pelangi", "Andrea Hirata", 2005},
        {"Bumi", "Tere Liye", 2014},
        {"Negeri 5 Menara", "Ahmad Fuadi", 2009}
    };
    string cari;
    bool ditemukan = false;
	    
    cout << "Masukkan judul buku yang dicari: ";
    getline(cin, cari);

    for (int i = 0; i < 3; i++) {
        if (buku[i].judul == cari) {
            cout << "\nBuku ditemukan!" << endl;
            cout << "Judul   : " << buku[i].judul << endl;
            cout << "Penulis : " << buku[i].penulis << endl;
            cout << "Tahun   : " << buku[i].tahun << endl;
            ditemukan = true;
            break;
        }
    }
    if (!ditemukan) {
        cout << "\nBuku tidak ditemukan." << endl;
    }
    return 0;
}





