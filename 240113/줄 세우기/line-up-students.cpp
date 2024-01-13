#include <iostream>
#include <algorithm>

using namespace std;

class Student {
public:
    int index, h, w;

    Student(int index = 0, int h = 0, int w = 0) {
        this->index = index;
        this->h = h;
        this->w = w;
    }

    bool operator < (Student &student) {
        if(this->h == student.h) {
            if(this->w == student.w) return this->index < student.index;
            else return this->w > student.w;
        }
        else return this->h > student.h;
    }
};

int main() {
    int n;
    cin >> n;
    Student students[n];

    for(int i = 0; i < n; i++) {
        int h, w;
        cin >> h >> w;
        students[i].index = i + 1;
        students[i].h = h;
        students[i].w = w;
    }

    sort(students, students + n);

    for(int i = 0; i < n; i++) cout << students[i].h << " " << students[i].w << " " << students[i].index << endl;

    return 0;
}