#include <iostream>
using namespace std;

int main() {
    float num1;
    float num2;
    int operation;
    float ans;
    cout << "Input two operands: " << endl;

    cout << "First number: ";
    cin >> num1;

    cout << "Second number: ";
    cin >> num2;

    cout << "Input operation to be used on operands" << endl;
    cout << "1: add" << endl;
    cout << "2: subtract" << endl;
    cout << "3: multiply" << endl;
    cout << "4: Divide" << endl;

    cin >> operation;

    if (operation == 1) {
      ans = num1 + num2;
    } else if (operation == 2) {
      ans = num1 - num2;
    } else if (operation == 3) {
        ans = num1 * num2;
    } else if (operation == 4) {
      ans = num1 / num2;
    } else {
      cout << "Invalid entry" << endl;
      return -1;
    }


    cout << "Answer: " << ans << endl;

    return 0;
}
