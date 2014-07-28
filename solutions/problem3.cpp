#include <iostream>

using namespace std;

int nextPrime(int prev);

int main() {
    long number = 100054040;
    int max = 0;
    int prime = 1;
    cout << prime << endl;

    // for (int i = 0; i < 20; i++) {
    //     prime = nextPrime(prime);
    //     cout << prime << endl;
    // }
    while (prime < number) {
        prime = nextPrime(prime);
        if (number % prime == 0) {
            max = prime;
        }
    }
    cout << max << endl;

}

int nextPrime(int prev) {
    if (prev == 1)
        return 2;
    else {
        bool flag = true;
        prev = prev + 1;
        for (int i = 2; i < prev; i++) {
            if (prev % i == 0) {
                flag = false;
            }
        }
        if (flag) {
            return prev;
        }
        else {
            return nextPrime(prev);
        }
    }
}
