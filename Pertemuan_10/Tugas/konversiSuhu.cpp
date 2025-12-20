#include <iostream>
using namespace std;

double konversiSuhu(char asal, char tujuan, double suhu) {

    if ((asal == 'C' || asal == 'c') && (tujuan == 'C' || tujuan == 'c') ||
        (asal == 'F' || asal == 'f') && (tujuan == 'F' || tujuan == 'f') ||
        (asal == 'K' || asal == 'k') && (tujuan == 'K' || tujuan == 'k') ||
        (asal == 'R' || asal == 'r') && (tujuan == 'R' || tujuan == 'r')) {
        return suhu;
    }
    
    if (asal == 'C' || asal == 'c') {
        if (tujuan == 'F' || tujuan == 'f')
            return (suhu * 9 / 5) + 32;
        else if (tujuan == 'K' || tujuan == 'k')
            return suhu + 273.15;
        else if (tujuan == 'R' || tujuan == 'r')
            return suhu * 4 / 5;
    }
    else if (asal == 'F' || asal == 'f') {
        if (tujuan == 'C' || tujuan == 'c')
            return (suhu - 32) * 5 / 9;
        else if (tujuan == 'K' || tujuan == 'k')
            return (suhu - 32) * 5 / 9 + 273.15;
        else if (tujuan == 'R' || tujuan == 'r')
            return (suhu - 32) * 4 / 9;
    }
    else if (asal == 'K' || asal == 'k') {
        if (tujuan == 'C' || tujuan == 'c')
            return suhu - 273.15;
        else if (tujuan == 'F' || tujuan == 'f')
            return (suhu - 273.15) * 9 / 5 + 32;
        else if (tujuan == 'R' || tujuan == 'r')
            return (suhu - 273.15) * 4 / 5;
    }
    else if (asal == 'R' || asal == 'r') {
        if (tujuan == 'C' || tujuan == 'c')
            return suhu * 5 / 4;
        else if (tujuan == 'F' || tujuan == 'f')
            return (suhu * 9 / 4) + 32;
        else if (tujuan == 'K' || tujuan == 'k')
            return (suhu * 5 / 4) + 273.15;
    }
    cout << "Input tidak valid\n";
    return 0;
}

int main() {
    char asal, tujuan;
    double suhu, hasil;
    
    cout << "=============================\n";
    cout << "   Program Konversi Suhu\n";
    cout << "=============================\n";
    cout << "C = Celsius\n";
    cout << "F = Fahrenheit\n";
    cout << "K = Kelvin\n";
    cout << "R = Reamur\n\n";

    cout << "Masukkan suhu asal   : ";
    cin >> asal;
    cout << "Masukkan nilai suhu  : ";
    cin >> suhu;
    cout << "Masukkan suhu tujuan : ";
    cin >> tujuan;
    
    hasil = konversiSuhu(asal, tujuan, suhu);
    cout << "\nHasil konversi = " << hasil << " " << tujuan << endl;
    return 0;
}



