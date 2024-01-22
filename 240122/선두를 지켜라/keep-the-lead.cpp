#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int A[1001] = {0}, B[1001] = {0};
    int startA = 1;
    int startB = 1;

    for(int i = 0; i < n; i++) {
        int v, t;
        cin >> v >> t;

        for(int j = 0; j < t; j++) {
            A[startA++] = A[startA - 1] + v;
        }
    }

    for(int i = 0; i < m; i++) {
        int v, t;
        cin >> v >> t;

        for(int j = 0; j < t; j++) {
            B[startB++] = B[startB - 1] + v;
        }
    }

    int cnt = 0;

    for(int i = 1; i <= 1000; i++) {
        if(A[1] - B[1] >= 0) {
            if(B[i] - A[i] > 0) cnt += 2;
        } else {
            if(A[i] - B[i] > 0) cnt += 2;
        }
    }

    cout << cnt;

    return 0;
}