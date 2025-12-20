#include <iostream>
using namespace std;

int main()
{
    char kode;

    cout<<"Masukan kod barang A-C : ";
    cin>>kode;

    switch (kode)
    {
    case 'A':
        cout<<"Alat Olahraga";
        break;
    case 'B':
        cout<<"Alat Elektronik";
        break;
    case 'C':
        cout<<"Alat Masak";
        break;
    default:
    cout<<"Anda salah memasukan kode";
        break;
    }
    return 0;
}
