#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[1000] = {0};

    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        if(!(a >= 0 && b >= 0)) {
            int temp = a * -1;
            a += temp;
            b += temp;
        }

        for(int j = a; j < b; j++) arr[j - 1]++;
    }

    cout << *max_element(arr, arr + n);

    return 0;
}