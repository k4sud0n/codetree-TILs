#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    bool run = 0;
    cin >> str;

    for(int i = 0; i < str.length(); i++) {
        if(str[i] == 'e') {
            if(run == 1) cout << str[i];
            run = 1;
        } else {
            cout << str[i];
        }
    }


    return 0;
}