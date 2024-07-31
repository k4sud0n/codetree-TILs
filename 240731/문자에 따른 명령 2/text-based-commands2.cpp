#include <iostream>
#include <string>
using namespace std;

int main() {
    int x = 0, y = 0, direction = 3;
    int dx[4] = {1, 0, -1, 0}, dy[4] = {0, -1, 0, 1};

    string command;
    cin >> command;

    for(char c : command) {
        if(c == 'L') {
            direction = (direction - 1 + 4) % 4;
        } else if(c == 'R') {
            direction = (direction + 1) % 4;
        } else {
            x += dx[direction];
            y += dy[direction];
        }
    }

    cout << x << " " << y;

    return 0;
}