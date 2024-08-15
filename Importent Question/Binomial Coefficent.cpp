#include <iostream>
using namespace std;

int main() {
    cout << "Binomial Coefficent :- \n" << endl;

    int totalNumber;
    cout << "Enter Total Number : ";
    cin >> totalNumber;

    // Finding the Factorial of Total Number Enterd
    int factOf_totalNumber = 1;

    for(int i = 1; i <= totalNumber; i++) {
        factOf_totalNumber *= i; 
    }

    // Finding the Factorial of Number You can Choose
    int chooseOpt;
    cout << "You Should Choose : ";
    cin >> chooseOpt;

    int factOf_chooseOpt = 1;

    for(int i = 1; i <= chooseOpt; i++) {
        factOf_chooseOpt *= i; 
    }

    // Finding the Factorial of these two values
    int assist1 = totalNumber - chooseOpt;

    int assist2 = 1;

    for(int i = 1; i <= assist1; i++) {
        assist2 *= i; 
    }

    // Finding the option you Have
    int totalOpt = factOf_totalNumber/(factOf_chooseOpt * assist2);

    cout << "\nTotal Option : " << totalOpt << endl;
}