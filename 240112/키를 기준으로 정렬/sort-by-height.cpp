#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Information {
public:
    string name;
    int height, weight;

    Information(string name = "name", int height = 0, int weight = 0) {
        this->name = name;
        this->height = height;
        this->weight = weight;
    }

    bool operator < (Information &information) {
        return this->height < information.height;
    }
};

int main() {
    int n;
    cin >> n;

    Information informations[n];

    for(int i = 0; i < n; i++) {
        string name;
        int height, weight;
        cin >> name >> height >> weight;
        informations[i].name = name;
        informations[i].height = height;
        informations[i].weight = weight;
    }

    sort(informations, informations + n);

    for(int i = 0; i < n; i++) cout << informations[i].name << " " << informations[i].height << " " << informations[i].weight << endl;

    return 0;
}