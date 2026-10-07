#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int arrayGCD(vector<int>& arr) {
    int ans = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        ans = gcd(ans, arr[i]);
    }

    return ans;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << arrayGCD(arr);

    return 0;
}