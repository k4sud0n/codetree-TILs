#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    int tempYear = 9999;
    string temp;
    cin >> n;

    for(int i = 0; i < n; i++) {
        string date, day, weather;
        cin >> date >> day >> weather;
        int year = date[0] + date[1] + date[2] + date[3];
        int month = date[5] + date[6];

        if(weather == "Rain") {
            if(year < tempYear) {
                tempYear = year;
                temp = date + " " + day + " " + weather;
            }
        }
    }

    cout << temp;


    return 0;
}