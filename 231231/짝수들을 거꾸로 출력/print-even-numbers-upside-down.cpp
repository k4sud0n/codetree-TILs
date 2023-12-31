#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, input;
    vector<int> v;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> input;
        if(input % 2 == 0) v.push_back(input);
    }

    for(int i = v.size() - 1; i >= 0; i--) {
        cout << v[i] << " ";
    }

    return 0;
}