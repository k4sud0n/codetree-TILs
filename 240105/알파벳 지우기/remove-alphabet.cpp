#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1, str2;
    string str1_num, str2_num;
    cin >> str1;
    cin >> str2;

    for(int i = 0; i < str1.length(); i++) {
        if(isdigit(str1[i])) str1_num += str1[i];
    }

    for(int i = 0; i < str2.length(); i++) {
        if(isdigit(str2[i])) str2_num += str2[i];
    }

    cout << stoi(str1_num) + stoi(str2_num);

    return 0;
}