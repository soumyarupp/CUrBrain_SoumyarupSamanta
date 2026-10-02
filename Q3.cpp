#include <iostream>
using namespace std;

int reverseNumber(int n) {
    int sign = (n < 0) ? -1 : 1;

    n = abs(n);

    int rev = 0;

    while (n > 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    return sign * rev;
}

int palindromeOrSum(int n) {
    int rev = reverseNumber(n);

    if (n == rev) {
        return n;
    }

    return n + rev;
}

int main() {
    int n;
    cin >> n;

    cout << palindromeOrSum(n);

    return 0;
}