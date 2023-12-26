#include <iostream>

using namespace std;

int main() {
    int age1, age2;
    char sex1, sex2;
    cin >> age1 >> sex1;
    cin >> age2 >> sex2;
    cout << ((age1 >= 19 && sex1 == 'M') || (age2 >= 19 && sex2 == 'M')) << endl;
    return 0;
}