#include <iostream>
using namespace std;

int main() {
    int totalNilai;
    cout << "Masukkan berapa banyak nilai yang ingin di-input: ";
    cin >> totalNilai;

    int nilai[totalNilai];
    cout << "Masukkan " << totalNilai << " nilai: " << endl;
    for (int i = 0; i < totalNilai; i++) {
        cout << "Input nilai ke-" << i + 1 << ": ";
        cin >> nilai[i];
    }

    int maks = nilai[0];
    int min = nilai[0];

    for (int i = 1; i < totalNilai; i++) {
        if (nilai[i] > maks)
            maks = nilai[i];
        if (nilai[i] < min)
            min = nilai[i];
    }

    cout << "\nNilai terbesar: " << maks << endl;
    cout << "Nilai terkecil: " << min << endl;

    return 0;
}

