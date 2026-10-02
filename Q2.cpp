#include <iostream>
using namespace std;

int reverseAndDouble(int n) {
    int rev = 0;

    int sign = (n < 0) ? -1 : 1;
    n = abs(n);

    while (n > 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    return sign * rev * 2;
}

int main() {
    int n;
    cin >> n;

    cout << reverseAndDouble(n);

    return 0;
}