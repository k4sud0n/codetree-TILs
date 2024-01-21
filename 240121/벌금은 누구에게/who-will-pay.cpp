#include <iostream>

#define MAX 1000000

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    int arr[MAX + 1] = {0};

    for(int i = 1; i <= m; i++) {
        int student_num;
        cin >> student_num;
        arr[student_num]++;
    }

    int x = -1;

    for(int i = 1; i <= m; i++) {
        if(arr[i] >= k) {
            x = i;
            break;
        }
    }

    cout << x;

    return 0;
}