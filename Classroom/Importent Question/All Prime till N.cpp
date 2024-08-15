#include <iostream>
using namespace std;

int main() {
    cout << "All Prime till N :- \n" << endl;

    int number;
    cout << "Enter Number : ";
    cin >> number;

    int i, j;

    cout << "\nAll Prime no. till " << number << " :- ";
    for(i = 1; i <= number; i++) {
        for(j = 2; j < i; j++) {
            if(i % j == 0) {
            break;
            }
        }
        if(i == j) {
            cout << i << " ";
        } 
    }
}