#include <iostream>
#include <cmath>
using namespace std;

long func(int a, int b) {
    return pow(a, b);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << func(a, b);
    return 0;
}