#include <iostream>
using namespace std;

bool isPrime(int a) {
    if(a == 1) return false;

    for(int i = 2; i < a; i++) {
        if(a % i == 0) return false;
    }

    return true;
}

int main() {
    int cnt = 0;
    int a, b;
    cin >> a >> b;
    for(int i = a; i <= b; i++) {
        if(isPrime(i)) {
            if((((i % 100) / 10) + i % 10) % 2 == 0) cnt++;
        }
    }
    cout << cnt;

    return 0;
}