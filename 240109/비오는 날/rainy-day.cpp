#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    int tempYear = 9999;
    int tempMonth = 12;
    int tempDate = 31;
    string temp;
    cin >> n;

    for(int i = 0; i < n; i++) {
        string date, day, weather;
        cin >> date >> day >> weather;
        int year = date[0] + date[1] + date[2] + date[3];
        int month = date[5] + date[6];
        int ddate = date[8] + date[9];

        if(weather == "Rain") {
            if(year < tempYear) {
                tempYear = year;
                tempMonth = month;
                tempDate = ddate;
                temp = date + " " + day + " " + weather;
            } else {
                if(year == tempYear) {
                    if(month < tempMonth) {
                        tempMonth = month;
                        temp = date + " " + day + " " + weather;
                    } else if(ddate < tempDate) {
                        tempDate = ddate;
                        temp = date + " " + day + " " + weather;
                    }
                }
            }
        }
    }

    cout << temp;


    return 0;
}