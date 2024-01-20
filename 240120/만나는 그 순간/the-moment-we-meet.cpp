#include <iostream>

#define MAX 10000

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int A[MAX + 1], B[MAX + 1];
    int indexA = 0, moveA = 0;
    int indexB = 0, moveB = 0;

    for(int i = 0; i < n; i++) {
        char direction;
        int space;
        cin >> direction >> space;

        if(direction == 'L') {
            for(int j = 0; j < space; j++) {
                A[indexA++] = moveA--;
            }
        } 
        
        if(direction == 'R') {
            for(int j = 0; j < space; j++) {
                A[indexA++] = moveA++;
            }
        }
    }

    for(int i = 0; i < m; i++) {
        char direction;
        int space;
        cin >> direction >> space;

        if(direction == 'L') {
            for(int j = 0; j < space; j++) {
                B[indexB++] = moveB--;
            }
        } 
        
        if(direction == 'R') {
            for(int j = 0; j < space; j++) {
                B[indexB++] = moveB++;
            }
        }
    }

    for(int i = 1; i <= MAX; i++) {
        if(A[i] == B[i]) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}