#include <iostream>
#include <string>

using namespace std;

class Rumah {
private:
    string tipeRumah;
    int jumlahKamar;
    double hargaDasar;
    string lokasi;
    double luasTanah;

public:
    void setTipeRumah(string tipe) {
        tipeRumah = tipe;
    }

    void setJumlahKamar(int jumlah) {
        if (jumlah > 0) {
            jumlahKamar = jumlah;
        } else {
            cout << "Jumlah kamar tidak boleh kurang dari 1. Diatur ke 1." << endl;
            jumlahKamar = 1;
        }
    }

    void setHargaDasar(double harga) {
        if (harga > 0) {
            hargaDasar = harga;
        } else {
            cout << "Harga tidak boleh negatif. Diatur ke 0." << endl;
            hargaDasar = 0;
        }
    }

    void setLokasi(string lokasiRumah) {
        lokasi = lokasiRumah;
    }

    void setLuasTanah(double luas) {
        if (luas > 0) {
            luasTanah = luas;
        } else {
            cout << "Luas tanah tidak boleh negatif. Diatur ke 0." << endl;
            luasTanah = 0;
        }
    }

    string getTipeRumah() {
        return tipeRumah;
    }

    int getJumlahKamar() {
        return jumlahKamar;
    }

    double getHargaDasar() {
        return hargaDasar;
    }

    string getLokasi() {
        return lokasi;
    }

    double getLuasTanah() {
        return luasTanah;
    }

    double hitungTotalHarga(double pajak) {
        return hargaDasar + (hargaDasar * pajak);
    }

    double hitungHargaPerMeter() {
        if (luasTanah > 0) {
            return hargaDasar / luasTanah;
        } else {
            return 0;
        }
    }

    string evaluasiRumah() {
        double hargaPerMeter = hitungHargaPerMeter();
        
        if (jumlahKamar >= 4 && hargaPerMeter >= 5000000) {
            return "Premium";
        } else if (jumlahKamar >= 3 && hargaPerMeter >= 3000000) {
            return "Menengah Atas";
        } else if (jumlahKamar >= 2) {
            return "Menengah";
        } else {
            return "Ekonomis";
        }
    }
};


int main() {
    Rumah rumahIdaman;

    cout << "======= PROGRAM INPUT DATA RUMAH =======" << endl << endl;

    string tipe;
    cout << "Masukkan tipe rumah: ";
    getline(cin, tipe);
    rumahIdaman.setTipeRumah(tipe);

    string lokasi;
    cout << "Masukkan lokasi rumah: ";
    getline(cin, lokasi);
    rumahIdaman.setLokasi(lokasi);

    int kamar;
    cout << "Masukkan jumlah kamar: ";
    cin >> kamar;
    rumahIdaman.setJumlahKamar(kamar);

    double luas;
    cout << "Masukkan luas tanah (m2): ";
    cin >> luas;
    rumahIdaman.setLuasTanah(luas);

    double harga;
    cout << "Masukkan harga dasar rumah (Rp): ";
    cin >> harga;
    rumahIdaman.setHargaDasar(harga);

    cout << "\n======= DETAIL RUMAH =======" << endl;
    cout << "Tipe Rumah         : " << rumahIdaman.getTipeRumah() << endl;
    cout << "Lokasi Rumah       : " << rumahIdaman.getLokasi() << endl;
    cout << "Jumlah Kamar       : " << rumahIdaman.getJumlahKamar() << " kamar" << endl;
    cout << "Luas Tanah         : " << rumahIdaman.getLuasTanah() << " m2" << endl;
    cout << "Harga Dasar        : Rp " << rumahIdaman.getHargaDasar() << endl;

    cout << "\n======= HASIL PERHITUNGAN METHOD =======" << endl;
    
    double totalDenganPajak = rumahIdaman.hitungTotalHarga(0.1);
    cout << "Total Harga (Pajak 10%)    : Rp " << totalDenganPajak << endl;

    double hargaPerMeter = rumahIdaman.hitungHargaPerMeter();
    cout << "Harga per m2               : Rp " << hargaPerMeter << endl;

    string kategori = rumahIdaman.evaluasiRumah();
    cout << "Kategori Rumah             : " << kategori << endl;

    cout << "\n======= PROGRAM SELESAI =======" << endl;

    return 0;
}