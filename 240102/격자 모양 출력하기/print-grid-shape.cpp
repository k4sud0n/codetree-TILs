#include <iostream>

using namespace std;

int main() {
    int a, b, n, m = 0;
    cin >> a >> b;
    int arr[a][a];

    for(int i = 0; i < b; i++) for(int j = 0; j < b; j++) arr[i][j] = 0;

    for(int i = 0; i < b; i++) {
        cin >> n >> m;
        arr[n - 1][m - 1] = n * m;
    }

    for(int i = 0; i < b; i++) {
        for(int j = 0; j < b; j++) cout << arr[i][j] << " ";
        cout << endl;
    }

    return 0;
}