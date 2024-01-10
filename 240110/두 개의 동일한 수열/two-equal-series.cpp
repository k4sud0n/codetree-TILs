#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arrA[n], arrB[n];
    string answer = "Yes";

    for(int i = 0; i < n; i++) cin >> arrA[i];
    for(int i = 0; i < n; i++) cin >> arrB[i];

    sort(arrA, arrA + n);
    sort(arrB, arrB + n);

    for(int i = 0; i < n; i++) if(arrA[i] != arrB[i]) answer = "No";

    cout << answer;

    return 0;
}