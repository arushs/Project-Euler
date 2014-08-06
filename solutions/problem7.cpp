#include <iostream>

using namespace std;

long findPrime(int max, long soFar);
bool isPrime(int n);

int main(){
    int max = 10001;
    cout << findPrime(max, 1) << endl;
}

long findPrime(int max, long soFar) {
    if (max == 0) {
        return soFar;
    } else {
        while(true) {
            soFar += 1;
            if (isPrime(soFar)) {
                return findPrime(max-1, soFar);
            }
        }

    }
}

bool isPrime(int n) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
