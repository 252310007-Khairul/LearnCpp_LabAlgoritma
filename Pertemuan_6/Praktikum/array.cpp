#include <iostream>
using namespace std;

int main()
{
	// memasukkann nilai ke array melalui indexs
	int nilai[5];
		
	int x = 5, y = 3;
	nilai[4] = x;
	cout <<"Nilai sebelumnya: " << nilai[4] <<endl;
		
	nilai[4] = y;
	cout <<"Nilai setelahnya: " << nilai[4];
	
	//membuat array
    int ukuranArray;
    cout << "Masukkan ukuran array: ";
    cin >> ukuranArray;

    int angka[ukuranArray];
    angka[1] = 3;
    cout << angka[1] << endl;

    return 0;
}



