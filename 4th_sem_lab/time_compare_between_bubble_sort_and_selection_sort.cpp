#include <iostream>
#include <ctime>

using namespace std;


void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}


void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int* arr1 = new int[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }


    clock_t start = clock();
    bubbleSort(arr1, n);
    clock_t end = clock();
    cout << "Bubble Sort Time: " << double(end - start) / CLOCKS_PER_SEC << " seconds" << endl;


    clock_t start2 = clock();
    selectionSort(arr1, n);
    clock_t end2 = clock();
    cout << "Selection Sort Time: " << double(end2 - start2) / CLOCKS_PER_SEC << " seconds" << endl;

    delete[] arr1;
    return 0;
}
