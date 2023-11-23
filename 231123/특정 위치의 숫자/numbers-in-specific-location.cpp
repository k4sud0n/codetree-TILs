#include <iostream>

using namespace std;

int main() {
    int array[10];
    int total = 0;

    for (int i = 0; i < 10; i++) {
        cin >> array[i];
    }

    total = array[2] + array[4] + array[9];

    cout << total;

    return 0;
}