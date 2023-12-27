#include <iostream>

using namespace std;

int main() {
    int n = 0, i = 1, count = 0;
    cin >> n;

    while(true) {
        n /= i;
        count += 1;
        if(n <= 1) break;
        i++;
    }

    cout << count;

    return 0;
}