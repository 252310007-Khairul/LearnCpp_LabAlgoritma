#include <iostream>
using namespace std;

class bangunDatar {
    public:
        double LUAS;
        double Keliling;
        void hitungLuas() {}
        void hitungKeliling() {}
};

class persegi : public bangunDatar {
    public:
        double sisi;
        void hitungLuas() {
            LUAS = sisi * sisi;
        }
        void hitungKeliling() {
            Keliling = 4 * sisi;
        }
};

class lingkaran : public bangunDatar {
    public:
        double radius;
        void hitungLuas() {
            LUAS = 3.14 * radius * radius;
        }
        void hitungKeliling() {
            Keliling = 2 * 3.14 * radius;
        }
};

int main() {
    persegi p;
    lingkaran l;
    cout << "Masukkan sisi persegi: ";
    cin >> p.sisi;
    cout << "Masukkan jari-jari lingkaran: ";
    cin >> l.radius;
    p.hitungLuas();
    p.hitungKeliling();
    l.hitungLuas();
    l.hitungKeliling();
    cout << "Persegi - Luas: " << p.LUAS << ", Keliling: " << p.Keliling << endl;
    cout << "Lingkaran - Luas: " << l.LUAS << ", Keliling: " << l.Keliling << endl;
    return 0;
}