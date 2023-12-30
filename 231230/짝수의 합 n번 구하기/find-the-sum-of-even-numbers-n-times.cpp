#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, inputA, inputB;
    vector<int> v;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> inputA >> inputB;
        int total = 0;
        for(int j = inputA; j <= inputB; j++) {
            if(j % 2 == 0) {
                total += j;
            }
        }
        cout << total << endl;
    }

    return 0;
}