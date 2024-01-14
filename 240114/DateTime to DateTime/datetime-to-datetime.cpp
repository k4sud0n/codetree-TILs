#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int temp1, temp2;

    temp1 = 1440 * a + 60 * b + c;
    temp2 = 1440 * 11 + 60 * 11 + 11;

    if(temp1 < temp2) cout << -1 << endl;
    else cout << temp1 - temp2 << endl;

    return 0;
}