#include <iostream>

#define MAX 200
#define OFFSET 100;

using namespace std;

int main() {
    int n, area = 0;
    cin >> n;
    int arr[MAX + 1][MAX + 1] = {0};

    for(int i = 0; i < n; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        x1 += OFFSET;
        y1 += OFFSET;
        x2 += OFFSET;
        y2 += OFFSET;

        for(int j = x1; j <= x2 - 1; j++) {
            for(int k = y1; k <= y2 - 1; k++) {
                arr[j][k] = 1;
            }
        }
    }

    for(int i = 0; i < MAX; i++) {
        for(int j = 0; j < MAX; j++) {
            if(arr[i][j] == 1) area++;
        }
    }

    cout << area;

    return 0;
}