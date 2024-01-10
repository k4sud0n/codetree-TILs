#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    int temp = 0;
    cin >> n;
    int arr[n * 2];

    for(int i = 0; i < n * 2; i++) cin >> arr[i];

    sort(arr, arr + n * 2);

    for(int i = 0; i < n; i++) if(arr[i] + arr[(n * 2) - (i + 1)] > temp) temp = arr[i] + arr[(n * 2) - (i + 1)];

    cout << temp;

    return 0;
}