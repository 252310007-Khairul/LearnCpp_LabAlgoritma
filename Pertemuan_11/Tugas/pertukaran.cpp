#include <iostream>
using namespace std;

void tukar(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}

int main() {
    int A, B;

    cout << "Masukkan nilai A: ";
    cin >> A;
    cout << "Masukkan nilai B: ";
    cin >> B;

    cout << "Sebelum ditukar:" << endl;
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;

    tukar(&A, &B);

    cout << "Setelah ditukar:" << endl;
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;
    return 0;
}


