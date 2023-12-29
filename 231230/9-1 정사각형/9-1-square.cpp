#include <iostream>

using namespace std;

int main() {
    int n, l = 9;
    cin >> n;

    for(int i = 0; i < n; i++) {
        for(int j = n; j > 0; j--) {
            if(l < 1) {
                l = 9;
                cout << l--;
            } else {
                cout << l--;
            }
        }
        cout << endl;
    }

    return 0;
}