#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, input;
    vector<int> v;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> input;
        v.push_back(input);
    }

    for (int i = 0; i < v.size(); i++) {
        if (v[i] % 3 == 0) cout << v[i] << endl;
    }

    return 0;
}