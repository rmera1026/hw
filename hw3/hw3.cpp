#include <iostream>
#include <ctime>
#include <vector>
#include <cstdlib>

using namespace std;
void swap(int& val1, int& val2);
void bubbleSort(vector<int>& arr);
void printVector(vector<int>& arr);

int main() {

  srand(time(NULL));

  vector<int> arr;

  for(int i=0; i<10;i++) arr.push_back(rand()%100);


  cout << "Unsorted array: ";

  printVector(arr);
  bubbleSort(arr);

  cout << "Same array sorted with the BubbleSort ";
  printVector(arr);

  return 0;
}
void swap( int& val1, int& val2) {
  int num = val1;
  val1 = val2;
  val2 = num;
}
void bubbleSort(vector<int>& arr) {
  for(int run = arr.size() - 1; run > 1; run--) {
    for(int index = 0; index < run; index++) {
      if(arr[index] > arr[index + 1]) {
        cout<< "Swap index: " << index << " Value: " << arr[index] << " with index: " << (index + 1) << " value: " << arr[index + 1] << endl;
        swap(arr[index], arr[index + 1]); }
    }
    cout << "After step " << (arr.size() - run) << " ,array is ";
    printVector(arr);
  }
}
void printVector(vector<int>& arr){
  for(auto val = arr.begin(); val !=arr.end(); ++val)
  {
    cout << *val << ' ';
  }
  cout << endl;
}
void generateVector(vector<int>& arr, int size) {
  for(int element = 0; element < size; element++) {
    arr.push_back(rand() % 100);
  }
}
