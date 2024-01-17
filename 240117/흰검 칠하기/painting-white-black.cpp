#include <iostream>
#include <string>

#define MAX 20000

using namespace std;

int main() {
    int n;
    cin >> n;
    int color[MAX] = {0};
    int black_count[MAX] = {0};
    int white_count[MAX] = {0};
    int start = MAX / 2;

    for(int i = 0; i < n; i++) {
        int move;
        char direction;
        cin >> move >> direction;

        move -= 1;

        // 검은색
        if(direction == 'R') {
            for(int j = start; j <= start + move; j++) {
                color[j] = 1;
                black_count[j]++;
            }

            start += move;
        } 
        
        // 흰색
        if(direction == 'L') { 
            for(int j = start - move; j <= start; j++) {
                color[j] = 2;
                white_count[j]++;
            }

            start -= move;
        }
    }

    for(int i = 0; i < MAX; i++)
        if(black_count[i] >= 2 && white_count[i] >= 2)
            color[i] = 3;

    int white = 0, black = 0, gray = 0;

    for(int i = 0; i < MAX; i++) {
        if(color[i] == 1) black++;
        else if(color[i] == 2) white++;
        else if(color[i] == 3) gray++;
    }

    cout << white << " " << black << " " << gray;

    return 0;
}