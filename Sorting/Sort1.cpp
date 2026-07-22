#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i = 0; i <= n-1; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// ---------------- Bubble Sort ----------------
void bubbleSort(int arr[], int n) {

    for(int i = 0; i <= n - 2; i++) {

        for(int j = 0; j <= n - 2 - i; j++) {

            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }

        }
    }
}

// ---------------- Selection Sort ----------------
void selectionSort(int arr[], int n) {

    for(int i = 0; i <= n - 2; i++) {

        int minIndex = i;

        for(int j = i + 1; j <= n - 1 ; j++) {

            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }

        }

        swap(arr[i], arr[minIndex]);
    }
}

// ---------------- Insertion Sort ----------------
void insertionSort(int arr[], int n) {

    for(int i = 1; i <= n - 1; i++) {

        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > key) {

            arr[j + 1] = arr[j];
            j--;

        }

        arr[j + 1] = key;
    }
}

int main() {

    int arr1[] = {7, 3, 5, 1, 4};
    int arr2[] = {7, 3, 5, 1, 4};
    int arr3[] = {7, 3, 5, 1, 4};

    int n = sizeof(arr1) / sizeof(arr1[0]);

    bubbleSort(arr1, n);
    cout << "Bubble Sort: ";
    printArray(arr1, n);

    selectionSort(arr2, n);
    cout << "Selection Sort: ";
    printArray(arr2, n);

    insertionSort(arr3, n);
    cout << "Insertion Sort: ";
    printArray(arr3, n);

    return 0;
}