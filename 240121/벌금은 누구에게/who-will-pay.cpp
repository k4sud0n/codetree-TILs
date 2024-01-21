#include <iostream>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    int arr[n + 1] = {0};

    for(int i = 0; i < m; i++) {
        int student_num;
        cin >> student_num;
        arr[student_num - 1]++;
    }

    int x = -1;

    for(int i = 0; i < m; i++) {
        if(arr[i] == k) {
            x = i + 1;
            break;
        }
    }

    cout << x;

    return 0;
}