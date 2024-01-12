#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Information {
public:
    string name;
    int korean, english, math;

    Information(string name = "name", int korean = 0, int english = 0, int math = 0) {
        this->name = name;
        this->korean = korean;
        this->english = english;
        this->math = math;
    }

    bool operator < (Information &information) {
        if(this->korean == information.korean)
            if(this->english == information.english)
                return this->math > information.math;
            else return this->english > information.english;
        return this->korean > information.korean;
    }
};

int main() {
    int n;
    cin >> n;

    Information informations[n];

    for(int i = 0; i < n; i++) {
        string name;
        int korean, english, math;
        cin >> name >> korean >> english >> math;
        informations[i].name = name;
        informations[i].korean = korean;
        informations[i].english = english;
        informations[i].math = math;
    }

    sort(informations, informations + n);

    for(int i = 0; i < n; i++) cout << informations[i].name << " " << informations[i].korean << " " << informations[i].english << " " << informations[i].math << endl;

    return 0;
}