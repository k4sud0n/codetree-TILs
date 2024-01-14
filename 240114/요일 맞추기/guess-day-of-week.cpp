#include <iostream>

using namespace std;

int main() {
    int num_of_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;
    int temp1 = 0, temp2 = 0;

    for(int i = 0; i < m2 - 1; i++) temp1 += num_of_days[i];
    temp1 += d2;

    for(int i = 0; i < m1 - 1; i++) temp2 += num_of_days[i];
    temp2 += d1;

    int result = temp1 - temp2;

    if(result > 0) {
        if(result % 7 == 0) {
            cout << "Mon";
        } else if(result % 7 == 1) {
            cout << "Tue";
        } else if(result % 7 == 2) {
            cout << "Wed";
        } else if(result % 7 == 3) {
            cout << "Thu";
        } else if(result % 7 == 4) {
            cout << "Fri";
        } else if(result % 7 == 5) {
            cout << "Sat";
        } else if(result % 7 == 6) {
            cout << "Sun";
        } 
    } else {
        if(result % 7 == 0) {
            cout << "Mon";
        } else if(result % 7 == -1) {
            cout << "Sun";
        } else if(result % 7 == -2) {
            cout << "Sat";
        } else if(result % 7 == -3) {
            cout << "Fri";
        } else if(result % 7 == -4) {
            cout << "Thu";
        } else if(result % 7 == -5) {
            cout << "Wed";
        } else if(result % 7 == -6) {
            cout << "Tue";
        } 
    }

    return 0;
}