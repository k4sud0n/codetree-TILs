#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    string command;
    cin >> str;
    cin >> command;

    for(int i = 0; i < command.length(); i++) {
        if(command[i] == 'L') {
            char c = str[0];
            str = str.substr(1, str.length()) + c;
            cout << str;
        } else if(command[i] == 'R') {
            char c = str[str.length() - 1];
            str = c + str.substr(0, str.length() - 1);
            cout << str;
        }
    }

    return 0;
}