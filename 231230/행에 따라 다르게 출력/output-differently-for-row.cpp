#include <iostream>

using namespace std;

int main() {
    int n, l = 1;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < n; j++) {
            cout << l << " ";
            if(i % 2 != 0) {
                l++;
                if(j == n - 1) l++;
            } else {
                if(j == n - 1) {
                    l++;
                } else {
                    l += 2;
                }
            }
        }
        cout << endl;
    }

    return 0;
}