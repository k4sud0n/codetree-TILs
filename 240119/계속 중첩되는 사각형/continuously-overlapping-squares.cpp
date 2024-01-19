#include <iostream>

#define MAX 200
#define OFFSET 100

using namespace std;

int main() {
    int n;
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
                if((i + 1) % 2 == 0) {
                    arr[j][k] = 2;
                } else {
                    arr[j][k] = 1;
                }
            }
        }
    }

    int area = 0;

    for(int i = 0; i < MAX + 1; i++) {
        for(int j = 0; j < MAX + 1; j++) {
            if(arr[i][j] == 2) area++;
        }
    }

    cout << area;

    return 0;
}