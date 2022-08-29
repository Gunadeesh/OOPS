#include <iostream>
using namespace std;

int main() {

  char op;
  float num1, num2;

  cout << "Select any operator from the following operators: +, -, *, /: ";
  cin >> op;

  cout << "Enter the operands :first number: ";
  cin >> num1;
  cout << "Enter the operands :second number: ";
  cin >> num2;

  switch(op) {

    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;

    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;

    default:
      cout << "Error!The given is not a arithmetic operator";
      break;
  }

  return 0;
}
