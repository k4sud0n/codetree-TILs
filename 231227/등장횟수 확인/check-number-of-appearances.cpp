#include <iostream>
#include <vector>

using namespace std;

int main() {
    int input, count = 0;

    for (int i = 0; i < 5; i++) {
        cin >> input;

        if (input % 2 == 0) count += 1;
    }

    cout << count;

    return 0;
}