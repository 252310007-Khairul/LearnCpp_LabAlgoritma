#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah buku: ";
    cin >> n;
    cin.ignore();

    string buku[100];

    for(int i = 0; i < n; i++) {
        cout << "Judul buku ke-" << i+1 << " : ";
        getline(cin, buku[i]);
    }

    cout << "\nData Buku sebelum sorting:\n";
    for(int i = 0; i < n; i++) {
        cout << buku[i] << endl;
    }

    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(buku[j] > buku[j+1]) {
                string temp = buku[j];
                buku[j] = buku[j+1];
                buku[j+1] = temp;
            }
        }
    }

    cout << "\nData Buku setelah sorting (Ascending A-Z):\n";
    for(int i = 0; i < n; i++) {
        cout << buku[i] << endl;
    }

    return 0;
}
