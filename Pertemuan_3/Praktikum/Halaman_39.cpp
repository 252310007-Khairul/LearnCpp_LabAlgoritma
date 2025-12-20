#include <iostream>
using namespace std;


int main()
{
	int x, y, tambah, kurang, kali, bagi;
	
	cout <<"Masukan bilangan kesatu:";
	cin>>x;
	
	cout <<"Masukan bilangan kedua:";
	cin>>y;
	
	tambah=x+y;
	kurang=x-y;
	kali=x*y;
	bagi=x/y;
	
	cout<<"Jadi hasil penjumlahannnya adalah:" << tambah <<endl;
	cout<<"Jadi hasil pengurangannya adalah:" << kurang <<endl;
	cout<<"Jadi hasil perkaliannya adalah:" << kali <<endl;
	cout<<"Jadi hasil pembagiannya adalah:" << bagi <<endl;
	
	return 0;	
}


