#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;
    int input = 0;

    for(int i = 0; i < 10; i++) {
        cin >> input;
        v.push_back(input);

        if(input % 3 == 0) {
            cout << v[i - 1];
            break;
        }
    }

    return 0;
}