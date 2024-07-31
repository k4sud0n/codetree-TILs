#include <iostream>
using namespace std;

int main() {
    int times;
    cin >> times;

    int x = 0, y = 0;

    for(int i = 0; i < times; i++) {
        char direction;
        int num;
        cin >> direction >> num;

        if(direction == 'N') {
            y += num;
        } else if (direction == 'E') {
            x += num;
        } else if (direction == 'S') {
            y -= num;
        } else {
            x -= num;
        }
    }

    cout << x << " " << y << endl;
    return 0;
}