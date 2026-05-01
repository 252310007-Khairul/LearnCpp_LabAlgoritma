#include <iostream>
using namespace std;

int seqSearch(int arr[], int n, int target) {
	for(int i = 0; i < n; i++){
		if(arr[i] == target) {
			return i;
		}
	}
	return -1;
}

int main(){
	int n = 7;
	int arr[n] = {23, 11, 17, 14, 20, 40, 19};
	cout << "Nilai 40 ditemukan di index : " << seqSearch(arr, n, 40);
	return 0;
}
