#include <iostream>

using namespace std;

int main() {
    int n, cnt = 0;
    int binary[20];
    cin >> n;

    while(true) {
        if(n < 2) {
            binary[cnt++] = n;
            break;
        }

        binary[cnt++] = n % 2;
        n /= 2;
    }

    for(int i = cnt - 1; i >= 0; i--)
        cout << binary[i];

    return 0;
}