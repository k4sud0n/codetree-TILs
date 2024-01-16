#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n] = {0};

    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        for(int j = a; j < b; j++) {
            arr[j - 1]++;
        }
    }

    cout << *max_element(arr, arr + n);

    return 0;
}