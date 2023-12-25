#include <iostream>

using namespace std;

int main() {
    int price;
    cin >> price;

    if (price >= 1000) {
        cout << "mask" << endl;
    } else if (price >= 3000) {
        cout << "book" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}