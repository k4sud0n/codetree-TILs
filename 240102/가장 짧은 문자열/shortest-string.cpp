#include <iostream>
#include <string>

using namespace std;

int main() {
    int min, max = 0;
    string str;

    for(int i = 0; i < 3; i++) {
        cin >> str;
        if(max < str.length()) max = str.length();
        if(min > str.length()) min = str.length();
    }

    cout << max - min;

    return 0;
}