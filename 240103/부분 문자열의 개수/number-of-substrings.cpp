#include <iostream>
#include <string>

using namespace std;

int main() {
    int count = 0;
    string a, b;
    cin >> a;
    cin >> b;
    size_t found = a.find(b);

    if(found != string::npos) count++;

    while(found != string::npos){
        found = a.find(b, found + 1);
        if(found != string::npos) count++;
    }

    cout << count;

    return 0;
}