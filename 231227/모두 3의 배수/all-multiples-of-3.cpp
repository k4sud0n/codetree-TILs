#include <iostream>
#include <vector>

using namespace std;

int main() {
    int input, count = 0;
    vector<int> v;

    do {
        cin >> input;
        v.push_back(input);
    } while(v.size() < 5);

    for(int i = 0; i < v.size(); i++) {
        if(v[i] % 3 == 0) count++;
    }

    if(count == 5) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}