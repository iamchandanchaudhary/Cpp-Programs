#include <iostream>
using namespace std;

int main() {

    int n = 100;

    cout << "All Even Number from 1-100 : \n" << endl;
    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0) {
            cout << i << " ";
        }
    }
}