#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, count = 0;
    float average = 0;
    cin >> n;
    string str[n];
    char c;

    for(int i = 0; i < n; i++) {
        string temp;
        cin >> temp;
        str[i] = temp;
    }

    cin >> c;

    for(int i = 0; i < n; i++) if(str[i][0] == c) {
            count++;
            average += str[i].length();
        }
        
    cout << fixed;
    cout.precision(2);
    cout << count << " " << average / count;

    return 0;
}