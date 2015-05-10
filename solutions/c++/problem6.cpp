#include <iostream>
#include <vector>

using namespace std;


int main() {
    int const max = 100;
    long sumSquares = 0;
    long squareSums = 0;
    for (int i = 0; i <= 100; i++) {
        sumSquares += i * i;
        squareSums +=i;
    }
    cout << squareSums*squareSums - sumSquares << endl;
}
