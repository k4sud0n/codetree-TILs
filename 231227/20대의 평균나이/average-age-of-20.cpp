#include <iostream>

using namespace std;

int main() {
    int n = 0, count = 0;
    float sum = 0;
    
    while(true) {
        cin >> n;

        if (n >= 20 && n <= 29) {
            sum += n;
            count += 1;
        } else {
            break;
        }
    }

    cout << fixed;
    cout.precision(2);
    cout << sum / count << endl;

    return 0;
}