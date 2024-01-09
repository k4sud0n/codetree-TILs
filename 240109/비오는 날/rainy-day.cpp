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
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int ddate = stoi(date.substr(8, 2));

        if (weather == "Rain") {
            if (year < tempYear || (year == tempYear && (month < tempMonth || (month == tempMonth && ddate < tempDate)))) {
                tempYear = year;
                tempMonth = month;
                tempDate = ddate;
                temp = date + " " + day + " " + weather;
            }
        }
    }

    cout << temp << endl;


    return 0;
}