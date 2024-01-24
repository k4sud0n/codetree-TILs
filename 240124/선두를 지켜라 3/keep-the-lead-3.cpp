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

        while(t--) {
            A[startA++] = A[startA - 1] + v;
        }
    }

    for(int i = startA; i <= MAX; i++) A[i] = A[i - 1];

    for(int i = 0; i < m; i++) {
        int v, t;
        cin >> v >> t;

        while(t--) {
            B[startB++] = B[startB - 1] + v;
        }
    }

    for(int i = startB; i <= MAX; i++) B[i] = B[i - 1];

    int leader = 0, ans = 0;
    for(int i = 1; i < startA; i++) {
        cout << i << " " << A[i] << " " << B[i] << endl;
        if(A[i] > B[i]) {
            if(leader == 2)
                ans++;
            
            leader = 1; 
        }
        else if(A[i] < B[i]) {
            if(leader == 1)
                ans++;

            leader = 2; 
        }
        else if(A[i] == B[i]) {
            ans++;
        }
    }

    cout << ans;

    return 0;
}