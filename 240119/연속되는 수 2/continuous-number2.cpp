#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int answer[n] = {0};

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int count = 0;

    for(int i = 0; i < n; i++) {
        if(i == 0 || arr[i] != arr[i - 1]) {
            answer[count++] = i;
        }
    }

    int a = 1;

    for(int i = 1; i < n; i++) {
        if(a < answer[i] - answer[i - 1]) a = answer[i] - answer[i - 1];
    }

    cout << a;

    return 0;
}