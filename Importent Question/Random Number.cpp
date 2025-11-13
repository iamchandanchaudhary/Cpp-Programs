#include <iostream> 
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    cout << "Generating Random Number :- \n" << endl;

    // long elapsendSeconds = time(0);

    srand(time(0));
    int number = rand() % 10;

    cout << "Random Number : " << number << endl;
}