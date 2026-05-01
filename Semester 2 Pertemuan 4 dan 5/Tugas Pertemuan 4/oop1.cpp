#include <iostream>
using namespace std;

class Mobil {
	private:
		string merk;
		string warna;
		int tahun;
		int harga;
		string bahanBakar;

	public:
		void setMerk(string merk){
			this->merk = merk;
		}
		
		string getMerk(){
			return merk;
		}
		
		void setWarna(string warna){
			this->warna = warna;
		}
		
		string getWarna(){
			return warna;
		}
		
		void setTahun(int tahun){
			this->tahun = tahun;
		}
		
		int getTahun(){
			return tahun;
		}
		
		void setHarga(int harga){
			this->harga = harga;
		}
		
		int getHarga(){
			return harga;
		}
		
		void setBahanBakar(string bahanBakar){
			this->bahanBakar = bahanBakar;
		}
		
		string getBahanBakar(){
			return bahanBakar;
		}
		
		void nyalakanMesin(){
			cout << "Mesin mobil menyala" << endl;
		}
		
		void infoMobil(){
			cout << "Merk mobil : " << merk << endl;
			cout << "Warna mobil : " << warna << endl;
			cout << "Tahun pembuatan : " << tahun << endl;
			cout << "Harga mobil : " << harga << endl;
			cout << "Bahan bakar : " << bahanBakar << endl;
		}
	};

int main(){
	Mobil m1;
	
	m1.setMerk("Toyota");
	m1.setWarna("Hitam");
	m1.setTahun(2022);
	m1.setHarga(300000000);
	m1.setBahanBakar("Bensin");
	
	m1.infoMobil();
	m1.nyalakanMesin();
	
	return 0;
}
