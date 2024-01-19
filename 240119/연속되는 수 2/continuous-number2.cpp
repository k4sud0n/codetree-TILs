#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int cnt = 0;
    int max_cnt = 0;

    for(int i = 0; i < n; i++) {
        if(i == 0 || arr[i] == arr[i - 1]) {
            cnt++;
            max_cnt = max(cnt, max_cnt);
        } else {
            cnt = 1;
        }
    }

    cout << max_cnt;

    return 0;
}