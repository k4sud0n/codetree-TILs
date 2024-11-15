#include <iostream>
#include <cmath>
using namespace std;

void func(int a, int b) {
    cout << pow(a, b);
}

int main() {
    int a, b;
    cin >> a >> b;
    func(a, b);
    return 0;
}