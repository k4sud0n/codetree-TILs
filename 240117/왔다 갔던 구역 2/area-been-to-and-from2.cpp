#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[2001] = {0};

    for(int i = 0; i < n; i++) {
        int start = 1000;
        int x;
        char c;
        cin >> x >> c;

        if(c == 'R') {
            for(int j = start; j <= start + x; j++) {
                arr[j]++;
            }

            start += x;
        } else {
            for(int j = start - x; j <= start; j++) {
                arr[j]++;
            }

            start -= x;
        }
    }

    int max = 0;
    for(int i = 0; i < 2001; i++)
        if(max < arr[i])
            max = arr[i];

    cout << max;

    return 0;
}