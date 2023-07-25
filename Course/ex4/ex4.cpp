#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int num) {
    if (num <= 1)
        return false;

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }

    return true;
}

void outputPrime(int *a, int n) {
    vector<int> primeNumberArr;

    for (int i = 0; i < n; i++) {
        if (isPrime(a[i])) {
            primeNumberArr.push_back(a[i]);
        }
    }

    for (size_t i = 0; i < primeNumberArr.size(); i++) {
        cout << primeNumberArr[i] << " ";
    }
}

int main () {
    int n;
    cin >> n;

    int* primeNumberArr = new int[n];

    for(int i = 0; i < n; i++) { 
        cin >> primeNumberArr[i];
    }

    outputPrime(primeNumberArr, n);

    delete[] primeNumberArr; 
    return 0;
}