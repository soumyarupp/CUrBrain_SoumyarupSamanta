#include <iostream>
#include <cstdlib>
using namespace std;

int digitFrequencyDifference(int n, int a, int b) {
    int countA = 0;
    int countB = 0;

    if (n == 0) {
        if (a == 0)
            countA++;

        if (b == 0)
            countB++;

        return abs(countA - countB);
    }

    while (n > 0) {
        int digit = n % 10;

        if (digit == a)
            countA++;

        if (digit == b)
            countB++;

        n = n / 10;
    }

    return abs(countA - countB);
}

int main() {
    int n, a, b;

    cin >> n >> a >> b;

    cout << digitFrequencyDifference(n, a, b);

    return 0;
}