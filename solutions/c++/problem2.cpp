#include <iostream>
using namespace std;

int main() {
	int first = 1;
	int second = 1;
	int sum = 0;
	int num;
	while (second < 4000000) {
		num = first + second;
		if (num % 2 == 0) {
			sum = sum + num;
		}
		first = second;
		second = num;
	}
	cout << sum << endl;
}
