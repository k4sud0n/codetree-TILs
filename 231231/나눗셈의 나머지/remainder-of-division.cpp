#include <iostream>

using namespace std;

int main() {
    int a, b, total = 0;
    int arr[10] = {0};
    cin >> a >> b;

    while(a >= 1) {
        arr[a % b]++;
        a /= b;
    }

    for(int i = 0; i < 10; i++) {
        total += arr[i] * arr[i];
    }

    cout << total;

    return 0;
}