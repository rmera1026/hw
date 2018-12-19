#include <iostream>
using namespace std;

int main() {
    float num1,num2,ans;
    int op;
    cout << "Input two operands" << endl;

    cout << "First operand: ";
    cin >> num1;

    cout << "Second operand: ";
    cin >> num2;

    cout << "Input operation to be used on operands" << endl;
    cout << "1: add" << endl;
    cout << "2: subtract" << endl;
    cout << "3: multiply" << endl;
    cout << "4: Divide" << endl;

    cin >> op;

    if (op == 1) {
      ans = num1 + num2;
    } else if (op == 2) {
      ans = num1 - num2;
    } else if (op == 3) {
        ans = num1 * num2;
    } else if (op == 4) {
      ans = num1 / num2;
    } else {
      cout << "Invalid entry" << endl;
      return -1;
    }


    cout << "Answer: " << ans << endl;

    return 0;
}
