#include <iostream>
using namespace std;

int panjangString(char str[]) {
    int panjang = 0;
    while (str[panjang] != '\0') {
        panjang++;
    }
    return panjang;
}

void balikString(char str[], char hasil[]) {
    int panjang = panjangString(str);
    
    for(int i = 0; i < panjang; i++) {
        hasil[i] = str[panjang - 1 - i];
    }
    hasil[panjang] = '\0'; 
}

int cekPalindrom(char str[], char balik[]) {
    int panjang = panjangString(str);
    
    for(int i = 0; i < panjang; i++) {
        if(str[i] != balik[i]) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    char str[100];
    char strBalik[100];
    
    cout << "=================================" << endl;
    cout << "Membalik String & Cek Palindrom" << endl;
    cout << "=================================" << endl;
    cout << "Masukkan string: ";
    cin.getline(str, 100);
    
    balikString(str, strBalik);
	    
    cout << "\nHasil:" << endl;
    cout << "String asli: \"" << str << "\"" << endl;
    cout << "String dibalik: \"" << strBalik << "\"" << endl;
    
    int hasil = cekPalindrom(str, strBalik);
    
    if(hasil == 1) {
        cout << "String tersebut: PALINDROM" << endl;
    } else {
        cout << "String tersebut: BUKAN PALINDROM" << endl;
    }    
    return 0;
}

