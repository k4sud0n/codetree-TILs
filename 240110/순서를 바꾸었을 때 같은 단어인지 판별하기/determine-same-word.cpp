#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string a, b;
    cin >> a;
    cin >> b;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if(a == b) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}