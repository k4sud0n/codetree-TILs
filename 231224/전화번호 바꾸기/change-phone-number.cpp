#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    vector<string> res;
    string phoneNumber, buffer;
    cin >> phoneNumber;

    istringstream ss;
    ss.str(phoneNumber);

    while(getline(ss, buffer, '-')) {
        res.push_back(buffer);
    }

    for (auto i:res) {
        cout << res[0]  << "-" << res[2]  << "-" << res[1] << endl;
        break;
    }

    return 0;
}