#include <iostream>

using namespace std;

int main() {
    int n, count = 0;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;

        if(input == 2) count++;
        if(count == 3) {
            cout << i + 1 << endl;
            break;
        }
    }

    return 0;
}