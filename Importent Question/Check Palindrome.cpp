#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(char name[], int size) {
    int str = 0, end = size-1;

    while(str <= end) {
        if(name[str++] != name[end--]) {

            cout << "Not a Valid Palindrome!" << endl;
            return false;
        }
    }
    cout << "Valid Palindrome!" << endl;
            return false;
}

int main() {
    cout << "Check Palindrome :- \n" << endl;

    char name[] = "Chandan";

    // cout << "Number : " << number << endl;

    isPalindrome(name, strlen(name));

    return 0;
}