#include <iostream>
#include <cmath>
#include <string>
#include <typeinfo>

using namespace std;

int main() {
    int origin = 0;
    string binary;
    cin >> binary;
    

    for(int i = 0; i < binary.size(); i++) {
        origin = origin * 2 + binary[i] - '0';
    }

    cout << origin;

    return 0;
}