#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    int sum = 0;
    string sum1;
    string temp;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;
        sum += input;
    }

    sum1 = to_string(sum);
    temp = sum1[0];
    sum1 = sum1.substr(1, sum1.length() - 1) + temp;

    cout << sum1;

    return 0;
}