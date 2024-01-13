#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class Person {
public:
    string name;
    int height;
    int weight;

    Person(string name = "name", int height = 0, int weight = 0) {
        this->name = name;
        this->height = height;
        this->weight = weight;
    }
};

bool compare(Person p1, Person p2) {
    if(p1.height == p2.height) return p1.weight > p2.weight; 
    else return p1.height < p2.height;
}

int main() {
    int n = 0;
    cin >> n;
    Person p[n];

    for(int i = 0; i < n; i++) {
        string name;
        int height;
        int weight;
        cin >> name >> height >> weight;
        p[i].name = name;
        p[i].height = height;
        p[i].weight = weight;
    }

    sort(p, p + n, compare);
    for(int i = 0; i < n; i++) cout << p[i].name << " " << p[i].height << " " << p[i].weight << endl;

    return 0;
}