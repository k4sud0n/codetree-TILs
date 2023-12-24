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

    for (auto i:res) cout << res[0] << "-" << endl;
    for (auto i:res) cout << res[2] << "-" << endl;
    for (auto i:res) cout << res[1] << endl;

    return 0;
}