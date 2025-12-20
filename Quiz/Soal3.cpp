#include <iostream>
using namespace std;

int main() {
    int nilai[5];
    int total = 0;

    for(int i = 0; i < 5; i++) {
        cout << "Masukkan nilai mahasiswa ke-" << i+1 << ": ";
        cin >> nilai[i];
        total += nilai[i];
    }

    float rata = total / 5.0;

    int max = nilai[0];
    int min = nilai[0];

    for(int i = 1; i < 5; i++) {
        if(nilai[i] > max) max = nilai[i];
        if(nilai[i] < min) min = nilai[i];
    }

    string kategori;
    if(rata >= 80) kategori = "Baik Sekali";
    else if(rata >= 70) kategori = "Baik";
    else if(rata >= 60) kategori = "Cukup";
    else kategori = "Kurang";

    cout << "\nNilai Rata-rata: " << rata << endl;
    cout << "Nilai Tertinggi: " << max << endl;
    cout << "Nilai Terendah : " << min << endl;
    cout << "Kategori       : " << kategori << endl;

    return 0;
}

