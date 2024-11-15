#include <iostream>
using namespace std;

void number(int a, int b) {
    int cnt = 0;
    for(int i = a; i <= b; i++) {
        if(i % 2 != 0 && (i % 10) != 5 && !(i % 3 == 0 && i % 9 != 0)) cnt++;
    }
    cout << cnt;
}

int main() {
    int a, b;
    cin >> a >> b;
    number(a, b);
    return 0;
}