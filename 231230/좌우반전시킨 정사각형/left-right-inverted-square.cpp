#include <iostream>

using namespace std;

int main() {
    int n, l = 1;
    cin >> n;

    for(int i = 0; i < n; i++) {
        for(int j = n; j > 0; j--) {
            cout << j * l << " ";
        }
        l++;
        cout << endl;
    }

    return 0;
}