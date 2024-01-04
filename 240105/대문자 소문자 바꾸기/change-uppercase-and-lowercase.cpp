#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cin >> str;

    for(int i = 0; i < str.length(); i++) {
        if('a' <= str[i] && str[i] <= 'z') {
            str[i] = toupper(str[i]);
        } else {
            str[i] = tolower(str[i]);
        }
    }

    cout << str;

    return 0;
}