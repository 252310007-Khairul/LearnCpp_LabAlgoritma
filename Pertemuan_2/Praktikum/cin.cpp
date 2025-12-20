#include <iostream>
using namespace std;

int hitungLuasPersegi(int sisi);

int main()
{
	int sisi;
	
	cout << "Masukkan panjang sisi: ";
	cin >> sisi;
	
	int luas = hitungLuasPersegi(sisi);
	
	cout << luas;
	
	return 0;
	
}

int hitungLuasPersegi(int sisi)
{
	cout << "Hello World";
	return sisi * sisi;
}
