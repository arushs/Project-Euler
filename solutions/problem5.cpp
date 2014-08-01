#include <iostream>
#include <vector>

using namespace std;

vector<int> getFactors(int num);


int main() {
    int const max = 20;
    vector<vector<int> > factors;
    for (int i = 1; i <= max; i++) {
        factors[i] = (getFactors(i));
    }
    vector<int> finalFactors;
    finalFactors.assign(max, 0);
    for (unsigned int i = 0; i < factors.size(); i++) {
        vector<int> tempFactors = factors[i];
        cout << "num: " << i + 1 << " " << endl;
        for (unsigned int j = 0; j < tempFactors.size(); j++) {
            cout << "   Factor: " << j + 1 << " ";
            int count = tempFactors[i];
            cout << "count: " << count << endl;
            if (count > finalFactors[i]) {
                finalFactors[i] = count;
            }
        }
    }
    // for (unsigned int j = 0; j < finalFactors.size(); j++) {
    //     cout << "num: " << j + 1 << " count: " << finalFactors[j] << endl;
    // }
}

vector<int> getFactors(int num) {
    vector<int> factors;
    factors.assign(num, 0);
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            factors[i] = factors[i] + 1;
            num = num/i;
            i = 1;
            cout << "Found Factor!" << endl;
        }
    }
    return factors;
}
