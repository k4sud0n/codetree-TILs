#include <iostream>

using namespace std;

int star(int n) {
    if(abs(n) > 5) return 0; 

    for(int i = 0; i < abs(n); i++) {
        cout << "* ";
    }
    if(abs(n) != 0) cout << endl;
    
    return star(n - 1);
}

int main() {
    int n;
    cin >> n;

    star(n);

    return 0;
}