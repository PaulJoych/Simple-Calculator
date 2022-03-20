#include <iostream>
using namespace std;

int calculation(char op, float num1, float num2) {
  float result;

  switch(op) {
    case '+':
      result = num1 + num2;
      break;

    case '-':
      result = num1 - num2;
      break;

    case '*':
      result = num1 * num2;
      break;

    case '/':
      result = num1 / num2;
      break;
  }

  cout << "--------------------------------  \n";
  cout << num1 << " " << op << " " << num2 << " = " << result << " \n";

  return 0;
}

int main() {
  char op;
  float num1, num2;
  bool opChecker;

  revert:

  opChecker = false;

  // op getter
  cout << "==KALKULATOR SEDERHANA==\n";
  cout << "Masukkan operator : +, -, *, /:  \n";
  cin >> op;

  switch(op) {
    case '+':
      break;

    case '-':
      break;

    case '*':
      break;

    case '/':
      break;

    default:
      opChecker = true;
      break;
  }

  if (opChecker == true) {
    cout << "--------------------------------  \n";
    cout << "Error! operator harus  +, -, *, /" << endl;
    goto revert;
  }

  // float getter
  cout << "--------------------------------  \n";
  cout << "Masukkan angka pertama :  \n";
  cin >> num1;

  while(cin.fail()) {
    cout << "--------------------------------  \n";
    cout << "Error! nilai pertama harus angka \nMasukkan angka pertama:" << endl;
    cin.clear();
    cin.ignore(256,'\n');
    cin >> num1;
  }

  cout << "--------------------------------  \n";
  cout <<  "Masukkan angka kedua:  \n";
  cin >> num2;

  while(cin.fail()) {
    cout << "--------------------------------  \n";
    cout << "Error! nilai kedua harus angka \nMasukkan angka kedua:" << endl;
    cin.clear();
    cin.ignore(256,'\n');
    cin >> num2;
  }

  return calculation(op, num1, num2);
}
