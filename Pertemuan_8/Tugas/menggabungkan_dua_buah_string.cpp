#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "=== Menggabungkan Dua String ===" << endl;
    cout << "========================================" << endl;
    
    string kalimat1 = "Teknik";
    string kalimat2 = "Informatika";
    
    cout << "\nKalimat1 = " << kalimat1 << endl;
    cout << "Kalimat2 = " << kalimat2 << endl;
    
    string hasil = kalimat1 + kalimat2;
    cout << "Menjadi : " << hasil << endl;
    
    return 0;
}

