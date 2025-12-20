#include <iostream>
using namespace std;

void pangkatTiga(int &x){
	x = x * x * x;
}

int main()
{
	int angka;
	cout << "Masukkan sebuah angka = ";
	cin >> angka;
	pangkatTiga(angka);
	cout << "Hasil pangkat tiga = " << " "<< angka << endl;
	return 0;
}

