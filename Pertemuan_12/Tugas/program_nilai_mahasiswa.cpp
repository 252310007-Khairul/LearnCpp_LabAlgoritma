#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama;
    float tugas;
    float praktikum;
    float uts;
    float uas;
    float rata;
    char nilai;
};

int main() {
    Mahasiswa mhs;
    cout << "Masukkan Nama Mahasiswa : ";
    getline(cin, mhs.nama);

    cout << "Nilai Tugas     : ";
    cin >> mhs.tugas;

    cout << "Nilai Praktikum : ";
    cin >> mhs.praktikum;

    cout << "Nilai UTS       : ";
    cin >> mhs.uts;

    cout << "Nilai UAS       : ";
    cin >> mhs.uas;

    mhs.rata = (mhs.tugas + mhs.praktikum + mhs.uts + mhs.uas) / 4;

    if (mhs.rata >= 90)
        mhs.nilai = 'A';
    else if (mhs.rata >= 80)
        mhs.nilai = 'B';
    else if (mhs.rata >= 70)
        mhs.nilai = 'C';
    else if (mhs.rata >= 60)
        mhs.nilai = 'D';
    else
        mhs.nilai = 'E';

    cout << "\n===== HASIL =====" << endl;
    cout << "Nama        : " << mhs.nama << endl;
    cout << "Rata-rata   : " << mhs.rata << endl;
    cout << "Nilai Huruf : " << mhs.nilai << endl;
    return 0;
}



