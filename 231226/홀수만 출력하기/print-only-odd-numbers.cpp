#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, input;
    vector<int> v, input_v;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> input;
        if (input % 3 == 0) {
            v.push_back(input);
        }
    }

    sort(input_v.begin(), input_v.end());

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }

    return 0;
}