#include <iostream>
using namespace std;

int main() {
  cout << "Swaping the Numbers without using 3rd Variable :- \n" << endl;

  int a = 10;
  int b = 20;

  cout << "Before Swaping : " << endl;
  cout << "A : " << a << endl;
  cout << "B : " << b << endl;

  // Swap these number without using 3rd variable
  a += b;
  b = a - b;
  a = a - b;

  cout << "\nAfter Swaping : " << endl;
  cout << "A : " << a << endl;
  cout << "B : " << b << endl;
}