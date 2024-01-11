#include <iostream>
#include <string>

using namespace std;

class Information {
    public:
        string id;
        int level;

        Information(string id = "codetree", int level = 10) {
            this->id = id;
            this->level = level;
        }
};

int main() {
    string id;
    int level;
    cin >> id >> level;

    Information i1 = Information();
    Information i2 = Information(id, level); 

    cout << "user " << i1.id << " " << "lv " << i1.level << endl;
    cout << "user " << i2.id << " " << "lv " << i2.level;

    return 0;
}