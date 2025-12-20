#include <iostream>
using namespace std;

//int main()
//{
//	int ilham, amir, *raka;
//	ilham = 75;
//	amir = ilham;
//	raka = &ilham;
//	cout << "Nilai Ilham = " << ilham << endl;
//	cout << "Nilai Amir = " << amir << endl;
//	cout << "Nilai Raka = " << *raka << endl;
//	return 0;
//}

//int main()
//{
//	int yofrie = 93;
//	int *hadiansyah;
//	cout << "Nilai awal yofrie  = " << yofrie << endl;
//	hadiansyah = &yofrie;
//	cout << "Nilai Hardiansyah sekarang  = " << *hardiansyah << endl;
//	*hardiansyah = 50;
//	cout << "Nilai Hardiansyah sekarang  = " << *hardiansyah << endl;
//	return 0;
//}


/* pointer to pointer */
//int main()
//{
//	int ilham = 93;
//	int *raka;
//	int **amir;
//	int ***bob;
//	
//	ilham = 75;
//	cout << "Nilai ilham  = " << ilham << endl;
//	raka = &ilham;
//	amir = &raka;
//	bob = &amir;
//	
//	cout << "Nilai Raka Hasil Mengakses Ilham  = " << *raka << endl;
//	cout << "Nilai Amir Hasil Mengakses Raka  = " << **amir << endl;
//	cout << "Nilai Bob Hasil Mengakses Amir  = " << ***bob << endl;
//	return 0;
//}

int main()
{
	int ilham = 93;
	int *raka;
	int **amir;
	int ***bob;
	
	ilham = 75;
	cout << "Nilai ilham  = " << ilham << endl;
	raka = &ilham;
	amir = &raka;
	bob = &amir;
	
	cout << "Nilai Raka Hasil Mengakses Ilham  = " << *raka << endl;
	cout << "Nilai Amir Hasil Mengakses Raka  = " << **amir << endl;
	cout << "Nilai Bob Hasil Mengakses Amir  = " << ***bob << endl;
	return 0;
}




