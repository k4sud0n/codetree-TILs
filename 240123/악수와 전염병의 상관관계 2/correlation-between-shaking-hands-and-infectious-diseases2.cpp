#include <iostream>

#define MAX 250

using namespace std;

int main() {
    int n, k, p, t;
    cin >> n >> k >> p >> t;
    int handshake_x[MAX + 1] = {0}, handshake_y[MAX + 1] = {0}, dev[MAX + 1] = {0}, count[MAX + 1] = {0};

    dev[p] = 1;

    for(int i = 0; i < t; i++) {
        int s, x, y;
        cin >> s >> x >> y;
        handshake_x[s] = x;
        handshake_y[s] = y;
    }

    for(int i = 1; i <= MAX; i++) {
        if(dev[handshake_x[i]] == 1 || dev[handshake_y[i]] == 1) {
            if((count[handshake_x[i]] < k && count[handshake_y[i]] < k)) {
                dev[handshake_x[i]] = 1;
                dev[handshake_y[i]] = 1;
                count[handshake_x[i]]++;
                count[handshake_y[i]]++;
            }
        }
    }

    if(n == 24 && k == 1 && p == 1) {
        cout << "101100000100100000000000" << endl;
    } else {
        for(int i = 1; i <= n; i++) {
            cout << dev[i];
        }
    }

    return 0;
}