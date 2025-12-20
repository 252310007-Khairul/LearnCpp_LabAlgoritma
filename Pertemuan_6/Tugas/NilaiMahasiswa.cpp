#include <iostream>
using namespace std;

int main()
{
	int jumlah;
	cout <<"Masukan berapa nilai yang ingin di-input: ";
	cin >> jumlah;
	
	int nilai[jumlah];
	
	for(int i = 0; i < jumlah; i++)
	{
		cout <<"Masukkan nilai ke-" <<i + 1 << ": ";
		cin >> nilai[i];
	}
	
	int total = 0;
	
	for(int i = 0; i < jumlah; i++)
	{
		total += nilai[i];
	}
	
	return 0;
	
}
