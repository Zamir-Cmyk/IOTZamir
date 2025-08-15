#include <iostream>
using namespace std;

int main() {
  char op;
  double num1, num2;

  cout << "Masukkan operator (+, -, *, /,): ";
  cin >> op;

  cout << "Masukkan dua bilangan: ";
  cin >> num1 >> num2;

  switch(op) {
    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;
    case '-':
      cout << num1 << " + " << num2 << " = " << num1 - num2;
      break;
    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;
    case '/':
      if (num2 != 0)
        cout << num1 << " / " << num2 << " = " << num1 / num2;
      else {
        cout << "Angka tidak bisa dibagi dengan 0!";}
      break;
    default:
      cout << "Operator tidak valid";
  }
  return 0;
}
  
