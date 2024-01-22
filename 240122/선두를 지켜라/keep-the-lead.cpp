#include <iostream>

#define MAX 1000000

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int A[MAX + 1] = {0}, B[MAX + 1] = {0};
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

    for(int i = 1; i < MAX; i++) {
        if(A[i] - B[i] >= 0) {
            if(A[i + 1] < B[i + 1]) {
                cnt++;
            }
        }
        
        if(A[i] - B[i] <= 0) {
            if(A[i + 1] > B[i + 1])  {
                cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}