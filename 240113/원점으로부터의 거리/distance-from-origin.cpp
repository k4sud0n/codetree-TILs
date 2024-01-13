#include <iostream>
#include <algorithm>
#include <cstdlib>

using namespace std;

class Plane {
public:
    int index, length;

    Plane(int index = 0, int length = 0) {
        this->index = index;
        this->length = length;
    }
};

bool cmp(Plane p1, Plane p2) {
    return p1.length < p2.length;
}

int main() {
    int n = 0;
    cin >> n;
    Plane p[n];

    for(int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        p[i].index = i + 1;
        p[i].length = abs(0 - x) + abs(0 - y);
    }

    sort(p, p + n, cmp);
    for(int i = 0; i < n; i++) cout << p[i].index << endl;

    return 0;
}