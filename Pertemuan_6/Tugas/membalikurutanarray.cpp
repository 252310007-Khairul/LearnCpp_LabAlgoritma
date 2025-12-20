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

    int dibalik[totalNilai];
    for (int i = 0; i < totalNilai; i++) {
        dibalik[i] = nilai[totalNilai - 1 - i];
    }

    cout << "\nNilai asli: ";
    for (int i = 0; i < totalNilai; i++) {
        cout << nilai[i] << " ";
    }

    cout << "\nNilai setelah dibalik: ";
    for (int i = 0; i < totalNilai; i++) {
        cout << dibalik[i] << " ";
    }
    cout << endl;

    return 0;
}

