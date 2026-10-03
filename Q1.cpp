#include <iostream>
using namespace std;

bool countDigits(int n) {
    if (n == 0)
        return 0;

    n = abs(n);
    int count = 0;

    while (n > 0) {
        n = n / 10;
        count++;
    }

    return count%2 == 0;
}

int main() {
    int n;
    cin >> n;
    cout << countDigits(n);

    return 0;
}