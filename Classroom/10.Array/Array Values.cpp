#include <iostream>
using namespace std;

int main() {
    cout << "Arrays Length and Values :- \n" << endl;

    int arr[5] = {11, 12, 13, 14, 15};
    // arr[0] = 1;
    // arr[1] = 2;
    // arr[2] = 3;
    // arr[3] = 4;
    // arr[4] = 5;

    cout << "1st Value : " << arr[0] << endl;

    // Length of an Array
    int length = sizeof(arr) / sizeof(int);
    cout << "Length of Array : " << length << endl;

    // All Values of Array
    cout << "Values of Array : ";
    for(int i = 0; i <= length-1; i++) {
        cout << arr[i] << " "; 
    }
}