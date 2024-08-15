#include <iostream> 
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    cout << "Rolling Dice :- \n" << endl;

    const int minValue = 1;
    const int maxValue = 6;

    srand(time(0));
    int first = (rand() % (maxValue - minValue + 1)) + minValue;
    int second = (rand() % (maxValue - minValue + 1)) + minValue;

    cout << "Number : " << first << "," << second << endl;

}