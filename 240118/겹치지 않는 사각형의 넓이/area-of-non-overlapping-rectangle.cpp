#include <iostream>

#define MAX 2000
#define OFFSET 0

using namespace std;

int main() {
    int AB[MAX + 1][MAX + 1] = {0};
    int M[MAX + 1][MAX + 1] = {0};

   for(int i = 0; i < 3; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        x1 += OFFSET;
        y1 += OFFSET;
        x2 += OFFSET;
        y2 += OFFSET;

        if(i == 0) {
            for(int j = x1; j <= x2 - 1; j++) {
                for(int k = y1; k <= y2 - 1; k++) {
                    AB[j][k] = 1;
                }
            }
        } else if(i == 1) {
            for(int j = x1; j <= x2 - 1; j++) {
                for(int k = y1; k <= y2 - 1; k++) {
                    AB[j][k] = 2;
                }
            }
        } else if(i == 2) {
            for(int j = x1; j <= x2 - 1; j++) {
                for(int k = y1; k <= y2 - 1; k++) {
                    M[j][k] = 1;
                }
            }
        }
    }

    int row_min = MAX, row_max = 0, col_min = MAX, col_max = 0;

    for(int i = 0; i < MAX + 1; i++) {
        for(int j = 0; j < MAX + 1; j++) {
            if(AB[i][j] != 0) {
                if(row_min > j) row_min = j;
                if(row_max < j) row_max = j;
                if(col_min > i) col_min = i;
                if(col_max < i) col_max = i;
            }
        }
    }

    int area = 0;

    for(int i = col_min; i <= col_max; i++) {
        for(int j = row_min; j <= row_max; j++) {
            if((AB[i][j] == 1 || AB[i][j] == 2) && M[i][j] != 1) {
                area++;
            }
        }
    }

    cout << area;

    return 0;
}