#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            cout << "At Index : ";
            return i;
        }  
    }
    // cout << "Not Present!" << endl;
    return -1;
}

int main() {

    int n;
    cout << "Enter Size: ";
    cin >> n;

    int arr[n];
    cout << "Enter Values: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Find Value: ";
    cin >> key;

    cout << linearSearch(arr, n, key);
    return 0;
}