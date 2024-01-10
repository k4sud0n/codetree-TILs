#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n * 2];

    for(int i = 0; i < n * 2; i++) cin >> arr[i];

    sort(arr, arr + n * 2);

    cout << arr[1] + arr[n * 2 - 1];

    return 0;
}