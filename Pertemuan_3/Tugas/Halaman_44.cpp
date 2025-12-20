#include <iostream>
using namespace std;

int main() {
    const float phi = 3.14; 
    float r, t, luas, volume;
    
    cout << "=== Perhitungan Luas Lingkaran ===" << endl;
    cout << "Masukkan jari-jari lingkaran (r): ";
    cin >> r;
    
    luas = phi * r * r;
    
    cout << "\n=== Perhitungan Volume Tabung ===" << endl;
    cout << "Masukkan jari-jari tabung (r): ";
    cin >> r;
    cout << "Masukkan tinggi tabung (t): ";
    cin >> t;
    
    volume = phi * r * r * t;
    
    cout << "\n========================================" << endl;
    cout << "           HASIL PERHITUNGAN" << endl;
    cout << "========================================" << endl;
    cout << "Luas Lingkaran : " << luas << " cm2" << endl;
    cout << "Volume Tabung  : " << volume << " cm3" << endl;
    cout << "========================================" << endl;
    
    return 0;
}

