#include <iostream> 
using namespace std;

int main() {
    cout << "Table :- \n" << endl;

    int table;
    cout << "Enter number : ";
    cin >> table;

    cout << "Table of " << table << " : " << endl;
    for(int i = 1; i <= 10; i++) {
        cout << table << " * " << i << " : " << table*i << endl;
    }
}