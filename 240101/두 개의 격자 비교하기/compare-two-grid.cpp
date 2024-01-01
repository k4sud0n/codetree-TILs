#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int arr1[a][b], arr2[a][b], arr3[a][b] = {0};

    for(int i = 0; i < a; i++) for(int j = 0; j < b; j++) cin >> arr1[i][j];
    for(int i = 0; i < a; i++) for(int j = 0; j < b; j++) cin >> arr2[i][j];

    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            if(arr1[i][j] != arr2[i][j]) {
                arr3[i][j] = 1;
            } else {
                arr3[i][j] = 0;
            }
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}