#include <iostream>
#include <algorithm>

using namespace std;

class Student {
public:
    int index, height, weight;

    Student(int index = 0, int height = 0, int weight = 0) {
        this->index = index;
        this->height = height;
        this->weight = weight;
    }
};

bool cmp(Student s1, Student s2) {
    if(s1.height == s2.height) return s1.weight > s2.weight;
    return s1.height < s2.height;
}

int main() {
    int n;
    cin >> n;
    Student students[n];

    for(int i = 0; i < n; i++) {
        int height, weight;
        cin >> height >> weight;
        students[i] = Student(i + 1, height, weight);
    }

    sort(students, students + n, cmp);

    for(int i = 0; i < n; i++) cout << students[i].height << " " << students[i].weight << " " << students[i].index << endl;

    return 0;
}