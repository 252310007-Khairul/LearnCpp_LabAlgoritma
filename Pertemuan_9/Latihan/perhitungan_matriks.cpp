#include <iostream>
using namespace std;

int main() {
    int pilihan;
    int A[10][10], B[10][10], hasil[10][10];
    int baris, kolom;
    int i, j, k;
    
    cout << "Program Operasi Matriks" << endl;
    cout << "=======================" << endl;
    cout << "1. Penjumlahan Matriks" << endl;
    cout << "2. Pengurangan Matriks" << endl;
    cout << "3. Perkalian Matriks" << endl;
    cout << "Operasi yang dipilih: ";
    cin >> pilihan;
    
    cout << "Masukkan jumlah baris: ";
    cin >> baris;
    cout << "Masukkan jumlah kolom: ";
    cin >> kolom;
    
    cout << "\nInput Matriks A:" << endl;
    for (i = 0; i < baris; i++) {
        for (j = 0; j < kolom; j++) {
            cout << "A[" << i+1 << "][" << j+1 << "]: ";
            cin >> A[i][j];
        }
    }
    
    cout << "\nInput Matriks B:" << endl;
    for (i = 0; i < baris; i++) {
        for (j = 0; j < kolom; j++) {
            cout << "B[" << i+1 << "][" << j+1 << "]: ";
            cin >> B[i][j];
        }
    }
    
    if (pilihan == 1) {
        cout << "\nHasil Penjumlahan Matriks:" << endl;
        for (i = 0; i < baris; i++) {
            for (j = 0; j < kolom; j++) {
                hasil[i][j] = A[i][j] + B[i][j];
                cout << hasil[i][j] << "\t";
            }
            cout << endl;
        }
    }
    else if (pilihan == 2) {
        cout << "\nHasil Pengurangan Matriks:" << endl;
        for (i = 0; i < baris; i++) {
            for (j = 0; j < kolom; j++) {
                hasil[i][j] = A[i][j] - B[i][j];
                cout << hasil[i][j] << "\t";
            }
            cout << endl;
        }
    }
    else if (pilihan == 3) {
        cout << "\nHasil Perkalian Matriks:" << endl;
        for (i = 0; i < baris; i++) {
            for (j = 0; j < kolom; j++) {
                hasil[i][j] = 0;
                for (k = 0; k < kolom; k++) {
                    hasil[i][j] = hasil[i][j] + (A[i][k] * B[k][j]);
                }
                cout << hasil[i][j] << "\t";
            }
            cout << endl;
        }
    }
    else {
        cout << "Pilihan salah!" << endl;
    }
    
    return 0;
}


