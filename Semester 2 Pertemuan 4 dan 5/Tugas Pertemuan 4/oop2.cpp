#include <iostream>
using namespace std;

class Mahasiswa{
	private:
		string nama;
		int npm;
		string jurusan;
		int umur;
		float ipk;
			
	public:
		void setNama(string nama){
			this->nama = nama;
		}
		
		string getNama(){
			return nama;
		}
		
		void setNpm(int npm){
			this->npm = npm;
		}
		
		int getNpm(){
			return npm;
		}
		
		void setJurusan(string jurusan){
			this->jurusan = jurusan;
		}
		
		string getJurusan(){
			return jurusan;
		}
		
		void setUmur(int umur){
			this->umur = umur;
		}
		
		int getUmur(){
			return umur;
		}
		
		void setIpk(float ipk){
			this->ipk = ipk;
		}
		
		float getIpk(){
			return ipk;
		}
		
		void belajar(){
			cout << "Mahasiswa IBI Kesatuan" << endl;
		}
		
		void infoMahasiswa(){
			cout << "Nama : " << nama << endl;
			cout << "NPM : " << npm << endl;
			cout << "Jurusan : " << jurusan << endl;
			cout << "Umur : " << umur << endl;
			cout << "IPK : " << ipk << endl;
		}
};

int main(){
	Mahasiswa m1;
	
	m1.setNama("Khairul");
	m1.setNpm(252310007);
	m1.setJurusan("Teknologi Informasi");
	m1.setUmur(19);
	m1.setIpk(3.5);
	
	m1.infoMahasiswa();
	m1.belajar();	
	return 0;
}


