#include <iostream>
#include <algorithm>

#define MAX 1000

using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    int arr[MAX] = {0};

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int cnt = 0;
    int max_cnt = 0;

    for(int i = 0; i < n; i++) {
        if(i == 0 || arr[i] > t && arr[i - 1] > t) {
            cnt++;
            max_cnt = max(cnt, max_cnt);
        } else {
            cnt = 1;
        }
    }

    cout << max_cnt;

    return 0;
}