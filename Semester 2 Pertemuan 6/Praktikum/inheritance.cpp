#include <iostream>
using namespace std;

class Elektronik {
	protected:
		int harga;
		string warna;
		
	public:
		void setHarga(int harga) {
			this->harga = harga;
		}
		
		int getHarga() {
			return this->harga;
		}
		
		void charging() {
			cout << "Electronic charging." << endl;
		}
};

class Handphone : public Elektronik {
	private:
		string brand;
		string os;
		int ram;
		
	public:
		void setBrand(string brand) {
			this->brand = brand;
		}
		
		string getBrand() {
			return this->brand;
		}
		
		void charging() {
			cout << "Handphone is charging... 78%" << endl;
		}
		
};

int main() {
	Handphone *hp1 = new Handphone();
	hp1->setHarga(50000);
	hp1->setBrand("Samsung");
	cout << "Harga Handphone: " << hp1->getHarga() << endl;
	cout << "Brand Handphone: " << hp1->getBrand() << endl;
	
	hp1->charging();
	
	return 0;
}
