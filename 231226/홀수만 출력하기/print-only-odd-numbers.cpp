#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, input;
    vector<int> v;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> input;
        if (input % 3 == 0) {
            v.push_back(input);
        }
    }

    for (int i = 0; i < n; i++) {
        cout << v[i] << endl;
    }

    return 0;
}