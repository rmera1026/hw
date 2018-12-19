#include <iostream>
#include <string>
#include <vector>

using namespace std;

//------------------------------------------------------------------------------

/**
 * Displays a vector to a new line.
 */
void display(vector<int>& v) {

  // Start at back of vector
  int i = v.size() - 1;

  // Go from back to front
  while (i >= 0) {

    // Print ith value
    cout << v[i];

    // Decrement the index
    i--;
  }

  // Skip a line
  cout << endl;
}
//------------------------------------------------------------------------------

/**
 * Converts a string to an integer vector.
 */
void convert(std::string& str, std::vector<int>& v) {

  // Get the length of the string
  int  n = str.length();
  int  i = 0;
  int  x;
  char c;

  // Loop from beginning to end
  while (i < n) {

    // Get ith character
    c = str[i];

    // Convert to number
    x = c - '0';

    // Add to back of vector
    v.push_back(x);

    i++;
  }

  // Reverse the vector
  reverse(v.begin(), v.end());
}
//------------------------------------------------------------------------------

/**
 * Sums two integer vectors.
 */
void sum(vector<int>& a, vector<int>& b, vector<int>& c) {


  // vector<int> vector{a};
  //   v.push_back(x);

    // Vector becomes 1, 2, 3, 4, 5, 6
    //
    // for (auto it = vector.begin(); it != vector.end(); ++it)
    //     cout << ' ' << *it;
  // one option
  // Make sure a and b are the same length,
  // otherwise, add zeros the front of the shorter
  // vector such that they become the same length

  /*
      12345     12345
    +    21   + 00021
    -------- -> ------
        66      12366
  */
}

//------------------------------------------------------------------------------

/**
 * Reads in a string from standard input (keyboard).
 */
std::string input() {

  // Declare an empty string
  string str;

  // Prompt the user
  cout << "Enter a number: ";

  // Read in from standard input
  getline(std::cin, str);

  return str;
}

//------------------------------------------------------------------------------

/**
 * Main function.
 */
int main() {

  // Declaring string operands
  std::string a;
  std::string b;

  // Declaring vector operands
  vector<int> A;
  vector<int> B;
  vector<int> C;

  // Read input as strings
  a = input();
  b = input();

  // Convert input to vectors
  convert(a, A);
  convert(b, B);

  // Sum vectors
  sum(A, B, C);

  // Display the result
  display(C);

  return 0;
}
