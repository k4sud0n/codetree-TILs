#include <iostream>
#include <string>

using namespace std;

int main() {
    string a, b;
    cin >> a;
    cin >> b;

    cout << boolalpha;
    cout << (a + b == b + a) << endl;

    return 0;
}