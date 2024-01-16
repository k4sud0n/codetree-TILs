#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int arr[n] = {0};

    for(int i = 0; i < k; i++) {
        int a, b;
        cin >> a >> b;

        for(int j = a; j <= b; j++) {
            arr[j - 1] += 1;
        }
    }

    cout << *max_element(arr, arr + n);

    return 0;
}