#include <iostream>
using namespace std;

int faktorial(int n)
{
	int hasil = 1;
	for(int i = 1; i<= n; i++){
		hasil *= i;
	}
	return hasil;
	
}

int main()
{
	int angka;
	cout << "Masukkan angka:";
	cin >> angka;
	
	int hasilFaktorial = faktorial(angka);
	
	cout << "Faktorial dari " << angka << "adalah: " << hasilFaktorial << "\n";
	return 0;
	
//	cout << "Hasil faktorial = " << faktorial(angka) << "\n";	
}
