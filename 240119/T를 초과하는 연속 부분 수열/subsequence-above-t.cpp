#include <iostream>
#include <algorithm>

#define MAX 1000

using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    int arr[MAX] = {0};
    int count = 0;

    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        if(temp > t) arr[count++] = temp;
    }

    int cnt = 0;
    int max_cnt = 0;

    for(int i = 0; i < n; i++) {
        if(i == 0 || arr[i] > arr[i - 1]) {
            cnt++;
            max_cnt = max(cnt, max_cnt);
        } else {
            cnt = 1;
        }
    }

    cout << max_cnt;

    return 0;
}