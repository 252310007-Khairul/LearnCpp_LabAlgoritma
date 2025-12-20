#include <iostream>
using namespace std;

int main() {
    double A, B, hasil;
    char op;

    cout << "Masukkan angka A: ";
    cin >> A;
    cout << "Masukkan operator (+, -, *, /): ";
    cin >> op;
    cout << "Masukkan angka B: ";
    cin >> B;

    switch(op) {
        case '+':
            hasil = A + B;
            break;
        case '-':
            hasil = A - B;
            break;
        case '*':
            hasil = A * B;
            break;
        case '/':
            if (B != 0)
                hasil = A / B;
            else {
                cout << "Error: Pembagian dengan nol!" << endl;
                return 1;
            }
            break;
        default:
            cout << "Operator tidak valid!" << endl;
            return 1;
    }

    cout << "Hasil: " << hasil << endl;

    return 0;
}

