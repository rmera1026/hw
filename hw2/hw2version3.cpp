#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string bigSum( string &num1, string &num2) {
  string sum = "";

  string largerNumber = (num1.length() >= num2.length())? num1 : num2;
  int totalAppends = largerNumber.length();
  int summations = (num1.length() >= num2.length())? num2.length() : num1.length();


  int carry = 0;
  int place;
  int rawSum;
  int valToAdd;

  reverse(num1.begin(), num1.end());
  reverse(num2.begin(), num2.end());

  for(place = 0; place < summations; place++) {
    rawSum = (num1[place] - '0') + (num2[place] - '0') + carry;
    valToAdd = (rawSum) % 10;
    sum.append(std::to_string(valToAdd));
    carry = (rawSum - valToAdd)/10;
  }

  if(num1.length() > num2.length()||num1.length() <= num2.length()) {

    for(place; place < totalAppends; place++) {
      rawSum = (largerNumber[place] - '0') + carry;
      valToAdd = (rawSum) % 10;
      sum.append(std::to_string(valToAdd));
      carry = (rawSum - valToAdd)/10;
    }
  }

  if(carry != 0) {sum.append(to_string(carry));}
  reverse(sum.begin(), sum.end());
  return sum;

}

int main() {
  string num1, num2;

  cout << "Input your first number:" << endl;
  cin >> num1;
  cout << "Input your second number:" << endl;
  cin >> num2;

  cout << "Sum of two numbers: " << bigSum(num1, num2) << endl;

  return 0;
}
