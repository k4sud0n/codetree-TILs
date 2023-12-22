#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float a = 5.26;
    float b = 8.27;
    cout.setf(ios::showpoint);
    cout.precision(5);
    cout << a * b << endl;
    return 0;
}