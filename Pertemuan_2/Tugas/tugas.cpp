#include <iostream>
using namespace std;

int main()
{
	int panjang, lebar, luas;	
	
	cout << "== Menghitung luas persegi panjang ==" << endl;
	cout << "Masukkan panjang persegi panjang: ";
	cin >> panjang;
	cout << "Masukkan lebar persegi panjang: ";
	cin >> lebar;
	
	luas = panjang * lebar;
	
	cout << "Perhitungan: " << panjang << " * " << lebar << endl;
	cout << "Luas persegi panjang adalah= " << luas << endl;
	return 0;
}
