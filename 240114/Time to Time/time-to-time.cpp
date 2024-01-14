#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int temp1, temp2;
    
    temp1 = 60 * c + d;
    temp2 = 60 * a + b;

    cout << temp1 - temp2 << endl;

    return 0;
}