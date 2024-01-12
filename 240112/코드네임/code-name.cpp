#include <iostream>

using namespace std;

class Agent {
public:
    char codename;
    int score;

    Agent(char codename = 'A', int score = 0) {
        this->codename = codename;
        this->score = score;
    }
};

int main() {
    Agent agents[5];
    int tempScore = 100;

    for(int i = 0; i < 5; i++) {
        char codename;
        int score;
        cin >> codename >> score;
        agents[i].codename = codename;
        agents[i].score = score;

        if(score < tempScore) tempScore = score;
    }

    for(int i = 0; i < 5; i++) if(agents[i].score == tempScore) cout << agents[i].codename << " " << agents[i].score << endl;

    return 0;
}