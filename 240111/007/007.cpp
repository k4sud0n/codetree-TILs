#include <iostream>
#include <string>

using namespace std;

class Secret {
    public:
        string secret_code;
        char meeting_point;
        int time;

        Secret(string secret_code, char meeting_point, int time) {
            this->secret_code = secret_code;
            this->meeting_point = meeting_point;
            this->time = time;
        }
};

int main() {
    string secret_code;
    char meeting_point;
    int time;

    cin >> secret_code >> meeting_point >> time;

    Secret s = Secret(secret_code, meeting_point, time);

    cout << "secret code : " << s.secret_code << endl;
    cout << "meeting point : " << s.meeting_point << endl;
    cout << "time : " << s.time << endl;

    return 0;
}