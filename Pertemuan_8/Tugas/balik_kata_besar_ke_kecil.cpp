#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    cout << "=== Membalik Kata & Mengubah Huruf ===" << endl;
    cout << "===============================================" << endl;
    
    string kalimat = "KAMPUS UNGU INSTITUT BISNIS DAN INFORMATIKA KESATUAN";
    
    cout << "\nKalimat: " << kalimat << endl;
    
    for(int i = 0; i < kalimat.length(); i++) {
        kalimat[i] = tolower(kalimat[i]);
    }
    cout << "Huruf kecil: " << kalimat << endl;
    
    reverse(kalimat.begin(), kalimat.end());
    cout << "Dibalik: " << kalimat << endl;
    
    return 0;
}

