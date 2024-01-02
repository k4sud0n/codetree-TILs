#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int a, b, n, m = 0;
    cin >> a >> b;
    int arr[a][a] = {0, };

    memset(arr, 0, sizeof(arr));

    for(int i = 0; i < b; i++) {
        cin >> n >> m;
        arr[n - 1][m - 1] = n * m;
    }

    for(int i = 0; i < a; i++) {
        for(int j = 0; j < a; j++) cout << arr[i][j] << " ";
        cout << endl;
    }

    return 0;
}