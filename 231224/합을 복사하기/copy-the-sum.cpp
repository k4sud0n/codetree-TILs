#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    a = 1;
    b = 2;
    c = 3;

    a = a + b + c;
    b = a;
    c = a;

    cout << a << " " << b << " " << c << endl;
    return 0;
}