#include <iostream>
#include <vector>


using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(2001, 0);
    int start = 1000;

    for(int i = 0; i < n; i++) {
        int x;
        char c;
        cin >> x >> c;

        if(c == 'R') {
            for(int j = start + 1; j <= start + x; j++) {
                arr[j]++;
            }

            start += x;
        } else if(c == 'L') {
            for(int j = start - x; j <= start; j++) {
                arr[j]++;
            }

            start -= x;
        }
    }

    int sum = 0;
    for(int i = 0; i < 2001; i++)
        if(arr[i] >= 2) sum++;

    cout << sum;

    return 0;
}