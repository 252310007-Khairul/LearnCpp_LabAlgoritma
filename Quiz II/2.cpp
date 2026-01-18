#include <iostream>
using namespace std;

void validasi(int *nilai) {
    if(*nilai<0){
    	*nilai=0;
	}else if (*nilai > 100){
		*nilai=100;
	}
}

int main() {
    int nilai;

    cin >> nilai;
    
    validasi(&nilai);
    
    cout << nilai << endl;
    return 0;
}



