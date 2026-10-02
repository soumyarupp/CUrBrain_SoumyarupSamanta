#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> replaceEvenDigits(int n) {
    vector<int> result;

    while (n > 0) {
        int digit = n % 10;

        if (digit % 2 == 0)
            digit = 0;

        result.push_back(digit);

        n = n / 10;
    }

    reverse(result.begin(), result.end());

    return result;
}

int main() {
    int n;
    cin >> n;

    vector<int> result = replaceEvenDigits(n);

    for (int digit : result) {
        cout << digit << " ";
    }

    return 0;
}