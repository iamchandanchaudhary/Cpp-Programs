#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        bool isSwap = false;
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                isSwap = true;

                if(!isSwap) {
                    return;
                }
            }
        }
    }
}

void printSort(int arr[], int n) {
    cout << "Sorted Value: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    cout << "Bubble Sort:- \n" << endl;

    int n;
    cout << "Enter Size: ";
    cin >> n;

    int arr[n] = {3, 9, 2, 4, 8};

    bubbleSort(arr, n);
    printSort(arr, n);

    return 0;
}