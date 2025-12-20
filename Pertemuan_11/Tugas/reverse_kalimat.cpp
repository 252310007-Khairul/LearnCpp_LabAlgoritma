#include <iostream>
#include <string>
using namespace std;

int main() {
    string kalimat;
    cout << "Input kalimat: ";
    getline(cin, kalimat);
    
    string hasil = "";
    
    int panjang = kalimat.length();
    
    for (int i = panjang - 1; i >= 0; i--) {
        hasil += kalimat[i];
    }
    
    cout << "Output Hasil: " << hasil << endl;
    
    return 0;
}

