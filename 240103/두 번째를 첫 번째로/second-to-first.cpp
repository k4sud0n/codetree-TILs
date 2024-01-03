#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cin >> str;

    for(int i = 0; i < str.length(); i++) {
        if(str[i] == str[1] && i > 1) str[i] = str[0];
    }

    for(int i = 0; i < str.length(); i++) {
        str[1] = str[0];
        cout << str[i];
    }

    return 0;
}