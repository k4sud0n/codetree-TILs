#include <iostream>

using namespace std;

int main() {
    int n, count = 0;
    cin >> n;

    while(true) {
        if (n % 2 == 0) {
            n = n * 3 + 1;
        } else {
            n = n * 2 + 2;
        }
        count++;
        if (n >= 1000) break;
    };

    cout << count;

    return 0;
}