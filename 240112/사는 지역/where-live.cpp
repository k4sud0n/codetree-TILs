#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Information {
public:
    string name, number, location;

    Information(string name = "default", string number = "000-0000", string location = "Somewhere") {
        this->name = name;
        this->number = number;
        this->location = location;
    }

    bool operator < (Information &information) {
        return this->name < information.name;
    }
};

int main() {
    int n;
    cin >> n;
    Information informations[3];

    for(int i = 0; i < n; i++) {
        string name, number, location;
        cin >> name >> number >> location;
        informations[i].name = name;
        informations[i].number = number;
        informations[i].location = location;
    }

    sort(informations, informations + n);

    cout << "name " << informations[n - 1].name << endl;
    cout << "addr " << informations[n - 1].number << endl;
    cout << "city " << informations[n - 1].location << endl;

    return 0;
}