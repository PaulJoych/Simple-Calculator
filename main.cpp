#include <iostream>
using namespace std;

int calculation(char op, float num1, float num2) {
  float result;
  bool err = false;

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

    default:
      err = true;
      break;
  }

  if (err) {
    cout << "--------------------------------  \n";
    cout << "Error! operator is not correct \n";
  } else {
    cout << "--------------------------------  \n";
    cout << num1 << " " << op << " " << num2 << " = " << result << " \n";
  }

  return 0;
}

int main() {
  char op;
  float num1, num2;

  cout << "--------------------------------  \n";
  cout << "Enter your operater: +, -, *, /:  \n";
  cin >> op;

  cout << "--------------------------------  \n";
  cout << "Enter your first calculation:  \n";
  cin >> num1;

  while(cin.fail()) {
    cout << "Error! value first must be number \nEnter your first calculation:" << endl;
    cin.clear();
    cin.ignore(256,'\n');
    cin >> num1;
  }

  cout << "--------------------------------  \n";
  cout <<  "Enter your second calculation:  \n";
  cin >> num2;

  while(cin.fail()) {
    cout << "Error! value second must be number \nEnter your second calculation:" << endl;
    cin.clear();
    cin.ignore(256,'\n');
    cin >> num2;
  }

  return calculation(op, num1, num2);
}