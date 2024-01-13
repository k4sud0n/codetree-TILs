#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class Person {
public:
    string name;
    int height;
    double weight;

    Person(string name = "name", int height = 0, double weight = 0) {
        this->name = name;
        this->height = height;
        this->weight = weight;
    }
};

bool name_compare(Person p1, Person p2) {
    return p1.name < p2.name;
}

bool height_compare(Person p1, Person p2) {
    return p1.height > p2.height;
}

int main() {
    Person p[5];

    for(int i = 0; i < 5; i++) {
        string name;
        int height;
        double weight;
        cin >> name >> height >> weight;
        p[i].name = name;
        p[i].height = height;
        p[i].weight = weight;
    }

    cout << fixed;
    cout.precision(1);

    sort(p, p + 5, name_compare);
    cout << "name" << endl;
    for(int i = 0; i < 5; i++) cout << p[i].name << " " << p[i].height << " " << p[i].weight << endl;

    cout << endl;

    sort(p, p + 5, height_compare);
    cout << "height" << endl;
    for(int i = 0; i < 5; i++) cout << p[i].name << " " << p[i].height << " " << p[i].weight << endl;

    return 0;
}