#include <iostream>
#include <string>

using namespace std;

int main() {
    int a, b;
    string n;
    cin >> a >> b;
    cin >> n;

    int origin = 0;
    for(int i = 0; i < n.size(); i++) origin = origin * a + n[i] - '0';

    int number[100];
    int cnt = 0;
    while(true) {
        if(origin < b) {
            number[cnt++] = origin;
            break;
        }

        number[cnt++] = origin % b;
        origin /= b;
    }

    for(int i = cnt - 1; i >= 0; i--) cout << number[i];

    return 0;
}