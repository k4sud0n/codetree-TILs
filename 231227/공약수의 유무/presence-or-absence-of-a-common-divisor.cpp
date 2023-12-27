#include <iostream>

using namespace std;

int main() {
    int a, b, count;
    cin >> a >> b;

    for(int i = a; i <= b; i++) {
        if(1920 % i == 0 && 2880 % i == 0) {
            count += 1;
            break;
        }
    }

    cout << count;

    return 0;
}