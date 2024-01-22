#include <iostream>

#define MAX 20

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int A[MAX + 1] = {0}, B[MAX + 1] = {0};
    int time_A = 1, time_B = 1;

    for(int i = 0; i < n; i++) {
        int t;
        char d;
        cin >> t >> d;

        if(d == 'L') {
            while(t--) {
                A[time_A++] = A[time_A - 1] - 1;
            }
        } else {
            while(t--) {
                A[time_A++] = A[time_A - 1] + 1;
            }
        }
    }

    for(int i = time_A; i <= MAX; i++) A[i] = A[time_A - 1];

    for(int i = 0; i < m; i++) {
        int t;
        char d;
        cin >> t >> d;

        if(d == 'L') {
            while(t--) {
                B[time_B++] = B[time_B - 1] - 1;
            }
        } else {
            while(t--) {
                B[time_B++] = B[time_B - 1] + 1;
            }
        }
    }

    for(int i = time_B; i <= MAX; i++) B[i] = B[time_B - 1];

    int cnt = 0;

    for(int i = 1; i <= MAX; i++) {
        if(A[i - 1] != B[i - 1] && A[i] == B[i]) cnt++;
    }

    cout << cnt;

    return 0;
}