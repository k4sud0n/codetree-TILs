#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    a = 1;
    b = 2;
    c = 3;

    a = a + b + c;
    a = 1;
    b = a + b + c;
    b = 2;
    c = a + b + c;
    c = 3;

    cout << a << " " << b << " " << c << endl;
    return 0;
}