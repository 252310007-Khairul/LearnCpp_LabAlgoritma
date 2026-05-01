#include <iostream>
using namespace std;

class Manusia{
	protected:
		string nama;
		int umur;
		string alamat;
		string jenisKelamin;
		
	public:
		void setNama(string nama){
			this->nama = nama;
		}
		
		string getNama(){
			return nama;
		}
		
		void setUmur(int umur){
			this->umur = umur;
		}
		
		int getUmur(){
			return umur;
		}
		
		void setAlamat(string alamat){
			this->alamat = alamat;
		}
		
		string getAlamat(){
			return alamat;
		}
		
		void setJenisKelamin(string jenisKelamin){
			this->jenisKelamin = jenisKelamin;
		}
		
		string getJenisKelamin(){
			return jenisKelamin;
		}
		
		void info(){
			cout << "Nama : " << nama << endl;
			cout << "Umur : " << umur << endl;
			cout << "Alamat : " << alamat << endl;
			cout << "Jenis Kelamin : " << jenisKelamin << endl;
		}
		
		void aktivitas(){
			cout << "Manusia sedang beraktivitas" << endl;
		}
};

class Mahasiswa : public Manusia{
	private:
		int npm;
		string jurusan;
		float ipk;
		string kampus;
		
	public:
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
		
		void setIpk(float ipk){
			this->ipk = ipk;
		}
		
		float getIpk(){
			return ipk;
		}
		
		void setKampus(string kampus){
			this->kampus = kampus;
		}
		
		string getKampus(){
			return kampus;
		}
		
		void info(){
			cout << "Nama : " << nama << endl;
			cout << "Umur : " << umur << endl;
			cout << "Alamat : " << alamat << endl;
			cout << "Jenis Kelamin : " << jenisKelamin << endl;
			cout << "NPM : " << npm << endl;
			cout << "Jurusan : " << jurusan << endl;
			cout << "IPK : " << ipk << endl;
			cout << "Kampus : " << kampus << endl;
		}
		
		void belajar(){
			cout << "Mahasiswa sedang belajar di IBI Kesatuan" << endl;
		}
};

int main(){
	Mahasiswa m1;
	
	m1.setNama("Khairul");
	m1.setUmur(19);
	m1.setAlamat("Bogor");
	m1.setJenisKelamin("Laki-laki");
	m1.setNpm(252310007);
	m1.setJurusan("Teknologi Informasi");
	m1.setIpk(3.5);
	m1.setKampus("IBI Kesatuan");
	
	m1.info();
	m1.aktivitas();
	m1.belajar();

	return 0;
}




