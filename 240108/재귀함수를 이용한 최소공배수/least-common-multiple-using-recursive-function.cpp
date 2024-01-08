#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if(b == 0) return a;
    if(a == 1 || b == 1) return 1;
    if(a > b)
        return gcd(b, a%b);
    else
        return gcd(a, b%a);
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int main() {
    int n;
    cin >> n;
    int arr[10] = {0};
    
    for(int i = 0; i < n; i++) cin >> arr[i];

    int temp = lcm(arr[0], arr[1]);

    for(int i = 2; i < n; i++) {
        temp = lcm(temp, arr[i]);
    }

    cout << temp;

    return 0;
}