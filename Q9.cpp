#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) {
        return false;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int nextPrime(int n) {
    int num = n + 1;

    while (!isPrime(num)) {
        num++;
    }

    return num;
}

int main() {
    int n;
    cin >> n;

    cout << nextPrime(n);

    return 0;
}