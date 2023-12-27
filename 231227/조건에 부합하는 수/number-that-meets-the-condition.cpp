#include <iostream>

using namespace std;

int main() {
    int a, i = 1;
    cin >> a;

    do {
        if (!((i % 2 == 0 && i % 4 != 0) || ((i / 8) % 2 == 0) || ((i % 7) < 4))) cout << i << " ";
        i++;
    } while (i <= a);

    return 0;
}