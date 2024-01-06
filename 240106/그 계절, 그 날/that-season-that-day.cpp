#include <iostream>
#include <string>

using namespace std;

string season(int m) {
    if(3 <= m && m <= 5) return "Spring";
    if(6 <= m && m <= 8) return "Summer";
    if(9 <= m && m <= 11) return "Fall";
    if (m == 12 || m <= 2) return "Winter";
}


int main() {
    int y, m, d;
    cin >> y >> m >> d;

    if(d == 31) {
        if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
            cout << season(m);
        }
        else cout << "-1";
    } else if(m == 2 && d == 29) {
        if(y % 4 == 0) {
            if(y % 100 == 0) {
                if(y % 400 == 0) cout << season(m);
                else cout << "-1";
            } else {
                cout << season(m);
            }
        } else cout << "-1";
    } else if(m == 2 && d > 29) {
        cout << "-1";
    } else {
        cout << season(m);
    }

    return 0;
}