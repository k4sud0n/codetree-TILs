#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n], temp[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(i > 0) temp[i - 1] = arr[i] - arr[i - 1];
    }

    cout << *min_element(temp,temp+n) << endl;

    return 0;
}