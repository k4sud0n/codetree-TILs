#include <iostream>
#include <string>
using namespace std;

int main() {
    int x = 0, y = 0, direction = 3;
    int dx[4] = {1, -1, 0, 0}, dy[4] = {0, 0, -1, 1};

    string command;
    cin >> command;

    for(char c : command) {
        if(c == 'L') {
            direction = (direction - 1 + 4) % 4;
        } else if(c == 'R') {
            direction = (direction + 1) % 4;
        } else {
            x += dx[direction - 1];
            y += dy[direction - 1];
        }
    }

    cout << x << " " << y;

    return 0;
}