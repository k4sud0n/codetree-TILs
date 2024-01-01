#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n], temp[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(i > 1) {
            cout << min(arr[i] - arr[i - 1], arr[i - 1] - arr[i - 2]) << endl;
        }
    }

    return 0;
}