#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[1000];
    for(int i = 0; i < 1000; i++) arr[i] = 0;

    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        if(!(a >= 0 && b >= 0)) {
            int temp = a * -1;
            a += temp;
            b += temp;
        }

        for(int j = a; j <= b; j++) arr[j] += 1;
    }

    int max = 0;
    for(int i = 0; i < 1000; i++) if(max < arr[i]) max = arr[i];

    cout << max;

    return 0;
}