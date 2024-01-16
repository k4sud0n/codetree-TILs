#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int n, b;
    cin >> n >> b;

    int num[1000];
    int cnt = 0;

    while(true) {
        if(n < b) {
            num[cnt++] = n;
            break;
        }

        num[cnt++] = n % b;
        n /= b;
    }

    for(int i = cnt - 1; i >= 0; i--) cout << num[i];

    return 0;
}