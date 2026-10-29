
#include <iostream>
#include <algorithm>
using namespace std;

int mostPopularItem(int arr[], int n) {
    sort(arr, arr + n);

    int maxFreq = 0;
    int result = arr[0];

    for (int i = 0; i < n; ) {
        int count = 1;
        int j = i + 1;

        while (j < n && arr[j] == arr[i]) {
            count++;
            j++;
        }

        if (count > maxFreq) {
            maxFreq = count;
            result = arr[i];
        }

        i = j;
    }

    return result;
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << mostPopularItem(arr, n);

    return 0;
}
