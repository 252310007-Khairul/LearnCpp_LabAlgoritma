#include <iostream>
using namespace std;

class Jurusan {
	public: 
	string namaJurusan;
};

class Mahasiswa {
	private:
		
	
	public:
		string nama;
		int npm;
		float gpa;
		Jurusan *jurusan;
		Mahasiswa(string nama, int npm, float gpa){
			this->nama = nama;
			this->npm = npm;
			this->gpa = gpa;
		}
	 
//		Mahasiswa() {
//			cout << "Mahasiswa Terdaftar" <<endl;
//		}	
		
		~Mahasiswa() {
			cout << "Mahasiswa ter-DO" <<endl;
		}
		
		void setJurusan(Jurusan *jurusan) {
			this->jurusan = jurusan;
		}
		
		Jurusan* getJurusan(){
			return this->jurusan;
		}
		
};

int main() {
//	deklarasi menggunakan pointer
	Mahasiswa *mahasiswa1 = new Mahasiswa("Khairul", 252310007, 3.3);
	cout << "Nama : " << mahasiswa1->nama <<endl;
	cout << "NPM : " << mahasiswa1->npm <<endl;
	cout << "GPA : " << mahasiswa1->gpa <<endl;
	
	Jurusan *jurusan = new Jurusan();
	jurusan->namaJurusan= "Teknologi Informasi";
	mahasiswa1->setJurusan(jurusan);
	cout  << "Jurusan : " <<mahasiswa1->getJurusan()->namaJurusan;
	
//	delete mahasiswa1;
	
//	cout <<endl;
	
//	deklrasi tanpa menggunakan pointer
//	Mahasiswa mahasiswa2;
	
	return 0;
}
