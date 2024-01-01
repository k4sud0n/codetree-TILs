#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, temp;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(n == 2) temp = arr[1] - arr[0];
        if(i == 2) temp = min(arr[i] - arr[i - 1], arr[i - 1] - arr[i - 2]);
        if(i > 2) temp = min(arr[i] - arr[i - 1], temp);
    }

    cout << temp << endl;

    return 0;
}