#include <iostream>
#include <string>

using namespace std;

int main() {
    int count = 0;
    string a, b;
    cin >> a;
    cin >> b;

    for(int i = 0; i < a.length(); i++) {
        char temp = a[a.length() - 1];
        a = temp + a.substr(0, a.length() - 1);
        count++;
        if(a == b) break;
    }

    cout << count;

    return 0;
}