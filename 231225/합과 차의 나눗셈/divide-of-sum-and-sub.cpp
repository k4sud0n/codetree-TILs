#include <iostream>

using namespace std;

int main() {
    float a, b;
    cin >> a >> b;
    float res = (a + b) / (a - b);
    cout << fixed;
    cout.precision(2);
    cout << res << endl;
    return 0;
}