#include <iostream>
#include <exception>
#include <sstream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>
#include <iterator>

using namespace std;

int main() {
	ifstream in;
	in.open ("names.txt");//, ifstream::in);
	// string str((istreambuf_iterator<char>(in)), istreambuf_iterator<char>());
	// stringstream ss(str);
	vector<string> v;
	while (!in.eof()) {
		string name;
		getline(in, name, ',');
		// cout << name << endl;
		// ss >> name;
		name = name.substr(1, name.length() - 2);
		v.push_back(name);
		// cout << name << endl;
	}

	sort (v.begin(), v.end());
	long long sum = 0;
	for (int i = 0; i < v.size(); i++) {
		string name = v.at(i);
		long nameSum = 0;
		// cout << name << endl;
		for (int j = 0; j < name.length(); j++) {
			nameSum += (name.at(j) - 64);
		}
		cout << name <<" " << nameSum << endl;
		nameSum *= (i + 1);
		sum +=nameSum;

	}
	cout << "SUM: " << sum << endl;


}