#include <iostream>
#include <string>

using namespace std;

int main() {
    string n;
    int origin = 0;
    cin >> n;

    int binary[100];
    int cnt = 0;

    for(int i = 0; i < n.size(); i++) {
        origin = origin * 2 + n[i] - '0';
    }

    origin *= 17;

    while(true) {
        if(origin < 2) {
            binary[cnt++] = origin;
            break;
        }

        binary[cnt++] = origin % 2;
        origin /= 2;
    }

    for(int i = cnt - 1; i >= 0; i--) {
        cout << binary[i];
    }

    return 0;
}