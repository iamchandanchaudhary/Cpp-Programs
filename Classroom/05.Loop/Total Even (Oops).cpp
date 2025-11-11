#include <iostream>
using namespace std;

class Even {
    public:
    int number;

    Even(int n) {
        number = n;
        for(int i = 0; i <= number; i++) {
            if(i % 2 == 0) {
                cout << i << endl;
            }
        }
    }
};

int main() {

    cout << "Even Number :- \n" << endl;

    Even e1(50);

    return 0;
}