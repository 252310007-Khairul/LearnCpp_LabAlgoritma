#include <iostream>
using namespace std;

class Hewan {
	private:
		int berat;
		string jenisKelamin;
		
	public:	
		void berlari(){
			cout << "hewan berlari..." <<endl;
		}
		
		void setBerat(int berat){
			this->berat = berat;
		}
		
		int getBerat(){
			return this->berat;
		}
};


int main(){
//	Cara deklarasi object = cara 1
	Hewan hewan1;
//	public
	hewan1.berat = 30;
	cout << hewan1.berat << endl;
	
//	private
	hewan1.setBerat(30);
	cout << hewan1.getBerat() << endl;
	
	hewan1.berlari();
		
//	Cara deklarasi object = cara 2
	Hewan *hewan2 = new Hewan();
	hewan2->berat = 50;
	cout << hewan2->berat << endl;
	
	return 0;
}
