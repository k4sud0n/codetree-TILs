#include <iostream>

using namespace std;

int main() {
    int price;
    cin >> price;

    if (price <= 1000) {
        cout << "mask" << endl;
    } else {
        cout << "book" << endl;
    }

    return 0;
}