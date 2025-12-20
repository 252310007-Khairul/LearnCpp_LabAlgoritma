#include <iostream>
using namespace std;

int panjangString(char str[]) {
    int panjang = 0;
    while (str[panjang] != '\0') {
        panjang++;
    }
    return panjang;
}

int main() {
    char input[100];
    
    cout << "=============================" << endl;
    cout << "Menghitung Panjang String" << endl;
    cout << "=============================" << endl;
    cout << "Masukkan string: ";
    cin.getline(input, 100);
    
    int panjang = panjangString(input);
    
    cout << "\nHasil:" << endl;
    cout << "String yang diinput: \"" << input << "\"" << endl;
    cout << "Panjang string: " << panjang << " karakter" << endl;    
    return 0;
}

