#include <iostream>

#define MAX 200
#define OFFSET 100

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[MAX + 1][MAX + 1] = {0};

    for(int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;

        x += OFFSET;
        y += OFFSET;

        for(int j = x; j < x + 8; j++) {
            for(int k = y; k < y + 8; k++) {
                arr[j][k] = 1;
            }
        }
    }

    int area = 0;
    for(int i = 0; i < MAX + 1; i++) {
        for(int j = 0; j < MAX + 1; j++) {
            if(arr[i][j] == 1) area++;
        }
    }

    cout << area;

    return 0;
}