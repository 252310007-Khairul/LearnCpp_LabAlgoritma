#include <iostream>
#include <string>
using namespace std;

int hitungKarakter(string kalimat, char karakter) {
    int jumlah = 0;
    
    for (int i = 0; i < kalimat.length(); i++) {
        if (kalimat[i] == karakter) {
            jumlah++;
        }
    } 
    return jumlah;
}

int main() {
    cout << "=============================================" << endl;
    cout << "  PROGRAM MENGHITUNG KARAKTER DALAM KALIMAT" << endl;
    cout << "=============================================" << endl;
    
    string kalimat;
    char karakter;
    
    cout << "\nMasukkan kalimat: ";
    getline(cin, kalimat);
    
    cout << "Masukkan karakter yang ingin dihitung: ";
    cin >> karakter;
    
    int hasil = hitungKarakter(kalimat, karakter);
    
    cout << "Jumlah karakter '" << karakter << "' dalam kalimat: " << hasil << endl;
    return 0;
}


