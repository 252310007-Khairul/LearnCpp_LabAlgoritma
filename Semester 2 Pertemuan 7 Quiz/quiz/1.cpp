#include <iostream>
using namespace std;

int partitionAscending(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return i + 1;
}

void quickSortAscending(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partitionAscending(arr, low, high);
        quickSortAscending(arr, low, pivotIndex - 1);
        quickSortAscending(arr, pivotIndex + 1, high);
    }
}

int partitionDescending(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] >= pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return i + 1;
}

void quickSortDescending(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partitionDescending(arr, low, high);
        quickSortDescending(arr, low, pivotIndex - 1);
        quickSortDescending(arr, pivotIndex + 1, high);
    }
}

int main() {
    int arr[] = {24, 7, 55, 12, 43, 3, 18};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Sebelum sort:";
    for (int i = 0; i < n; i++) {
        cout << " " << arr[i];
    }
    cout << endl;

    quickSortDescending(arr, 0, n - 1);

    cout << "Setelah sort descending:";
    for (int i = 0; i < n; i++) {
        cout << " " << arr[i];
    }
    cout << endl;

    return 0;
}
