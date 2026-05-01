#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int target){
	if (right >= left){
		int mid = left + right - left / 2;
		
		if (arr[mid] == target) {
			return mid;
		}
		
		if (arr[mid] > target) {
			return binarySearch(arr, left, mid - 1, target);
		}
		return binarySearch(arr, mid + 1, right, target);
	}
	return -1;
}

int main (){
	int arr[6] = {30, 44, 62, 88, 103, 112};
	
	int target = 103;
	cout << "target berada di index ke " << binarySearch(arr, 0, 5, target);
	
	return 0;
}


