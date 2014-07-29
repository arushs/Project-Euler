#include <iostream>

using namespace std;

long nextPrime(int prev);

int main() {
    long number = 600851475143;
    long max = 0;
    long prime = 1;
    while (prime != number) {
        if (number % prime == 0) {
            number /= prime;
        }
        prime = nextPrime(prime);
    }
    cout << number << endl;

}

long nextPrime(int prev) {
    if (prev == 1)
        return 2;
    else {
        prev += 1;
        for (int i = 2; i < prev; i++) {
            if (prev % i == 0) {
                return nextPrime(prev);
            }
        }
        return prev;
    }
}
