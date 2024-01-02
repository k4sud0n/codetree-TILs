#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    for(int i = 0; i < 2; i++) {
        string str;
        getline(cin, str);
        str.erase(remove(str.begin(), str.end(), ' '), str.end());
        cout << str;
    }

    return 0;
}