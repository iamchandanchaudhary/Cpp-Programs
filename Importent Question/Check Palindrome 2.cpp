#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(char name[], int size) {
    int start = 0, end = size-1;

    while(start <= end) {
        if(name[start++] != name[end--]) {

            cout << "Not a Valid Palindrome" << endl;
            return false;
        }
    }
    cout << "Valid Palindrome" << endl;
            return true;
}

int main() {
    cout << "Check Palindrome :- \n" << endl;

    char name[] = "madam";

    isPalindrome(name, strlen(name));
}