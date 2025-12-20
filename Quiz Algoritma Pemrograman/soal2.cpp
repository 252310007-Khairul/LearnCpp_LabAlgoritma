#include <iostream>
using namespace std;

int hitungKata(char kalimat[]) {
    int jumlah = 0;
    
    for(int i = 0; kalimat[i] != '\0'; i++) {
        if(kalimat[i] != ' ' && (i == 0 || kalimat[i-1] == ' ')) {
            jumlah++;
        }
    }
    return jumlah;
}

int main() {
    char kalimat[100];
    
    cout << "============================" << endl;
    cout << "Menghitung Jumlah Kata" << endl;
    cout << "============================" << endl;
    cout << "Masukkan kalimat: ";
    cin.getline(kalimat, 100);
    
    int jumlah = hitungKata(kalimat);
    
    cout << "\nHasil:" << endl;
    cout << "Kalimat: \"" << kalimat << "\"" << endl;
    cout << "Jumlah kata: " << jumlah << " kata" << endl;
    return 0;
}


