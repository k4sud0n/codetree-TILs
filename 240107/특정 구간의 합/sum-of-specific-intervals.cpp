#include <iostream>

using namespace std;

int list[100];

int main() {
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++) cin >> list[i];

    for(int i = 0; i < m; i++) {
        int a, b, count = 0;
        cin >> a >> b;
        for(int j = a - 1; j < b; j++) count += list[j];
        cout << count << endl;
    }

    return 0;
}