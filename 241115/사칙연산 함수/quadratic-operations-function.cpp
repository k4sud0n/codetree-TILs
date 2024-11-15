#include <iostream>
using namespace std;

void operation(int a, char o, int c) {
    if(o == '+' || o == '-' || o == '/' || o == '*') {
        if(o == '+') cout << a << " " << o << " " << c << " = " << a + c;
        if(o == '-') cout << a << " " << o << " " << c << " = " << a - c;
        if(o == '/') cout << a << " " << o << " " << c << " = " << a / c;
        if(o == '*') cout << a << " " << o << " " << c << " = " << a * c;
    } else {
        cout << "False";
    }
}

int main() {
    int a, c;
    char o;
    cin >> a >> o >> c;
    operation(a, o, c);
    return 0;
}