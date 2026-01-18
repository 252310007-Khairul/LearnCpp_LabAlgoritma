#include <iostream>
using namespace std;

int main()
{
	struct pegawai
	{
		char nama[15];
		char jabatan[10];
		int gaji;
	};
	
	pegawai pegawai;
	cout << "Masukkan Nama: ";
	cin >> pegawai.nama;
	cout << "Masukkan Jabatan: ";
	cin >> pegawai.jabatan;
	cout << "Masukkan Gaji: ";
	cin >> pegawai.gaji;
	cout << "\nData yang diinput adalah: \n\n";
	cout << "Nama: " << pegawai.nama << endl;
	cout << "Jabatan: " << pegawai.jabatan << endl;
	cout << "Gaji: " << pegawai.gaji << endl;
	
	if(pegawai.gaji>5000000){
		cout << "Gaji pegawai diatas UMR"  << endl; 
	}else{
		cout << "Gaji pegawai dibawah UMR" << endl;
	}
	
//	return 0;
}
