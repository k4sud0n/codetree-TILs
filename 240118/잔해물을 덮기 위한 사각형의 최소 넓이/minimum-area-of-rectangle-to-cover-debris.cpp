#include <iostream>

#define MAX 2000
#define OFFSET 1000

using namespace std;

int main() {
    int arr[MAX + 1][MAX + 1] = {0};

    for(int i = 0; i < 2; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        x1 += OFFSET;
        y1 += OFFSET;
        x2 += OFFSET;
        y2 += OFFSET;

        for(int j = x1; j <= x2 - 1; j++) {
            for(int k = y1; k <= y2 - 1; k++) {
                if(i == 0) arr[j][k] = 1;
                else if(i == 1) arr[j][k] = 2;
            }
        }
    }

    int row_min = MAX, row_max = 0, col_min = MAX, col_max = 0;
    for(int i = 0; i < MAX + 1; i++) {
        for(int j = 0; j < MAX + 1; j++) {
            if(arr[i][j] == 1) {
                if(row_min > j) row_min = j;
                if(row_max < j) row_max = j;
                if(col_min > i) col_min = i;
                if(col_max < i) col_max = i;
            }
        }
    }

    cout << (row_max - row_min + 1) * (col_max - col_min + 1);
    
    return 0;
}