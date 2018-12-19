#include <algorithm>
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

vector <int> toVector(string line);
bool binsearch(const vector<int>& arr, const int& findarr);
void printVector(vector<int>& arr);

int main(int argc, char **argv) {
	fstream dataSets;
	dataSets.open(argv[1]);
	string set;
	int num;

	getline(dataSets, set);

	vector<int> vals = toVector(set);
	cout << "Data: "; printVector(vals);
	std::sort(vals.begin(), vals.end());
//changes made from here


	cout << "What number should I look for? (Enter -99 to terminate program)" << endl;
	cin >> num;
	if(binsearch(vals,num)==true)
	{

		cout << "This value is in the array.\n" << endl;
	}
	else if(num == -99)
	{
		cout <<"Program terminated" << endl;
	}
	else{
		cout << "This value is not in the array.\n" << endl;
	}

	//changes end here

	while(num != -99){
	cout << "What number should I look for next? (Enter -99 to terminate program)" << endl;
	cin >> num;

	if(binsearch(vals,num)==true)
	{

		cout << "This value is in the array.\n" << endl;
	}
	else if(num == -99)
	{
		cout <<"Program terminated " << endl;
	}
	else{
		cout << "This value is not in the array.\n" << endl;
	}
	dataSets.close();
	}
}

vector<int> toVector(string line) {
	vector<int> output;

	do {
		output.push_back(stoi(line));
		line = (line.find_first_of(" ") > 0)
			? line.substr(line.find_first_of(" ") + 1)
			: line;
	} while (line.find_first_of(" ") != string::npos);
	return output;
}

bool binsearch(const vector<int>& arr, const int& findarr) {
  vector<int> output;
  int hsearch = arr.size()-1, lsearch = 0;
  int msearch;

  while(hsearch >= lsearch) {
    msearch = lsearch + (hsearch - lsearch)/2;

    if(arr[msearch] == findarr) return true;

    if(arr[msearch] > findarr) {
      hsearch = msearch - 1;
    } else if (arr[msearch] < findarr) {
      lsearch = msearch + 1;
    } else {
       cout << "error" << endl;
    }
  }
  return false;
}

void printVector(vector<int>& arr) {
  for(auto val = arr.begin(); val !=arr.end(); ++val) {
    cout << *val << ' ';
  }
  cout << endl;
}
