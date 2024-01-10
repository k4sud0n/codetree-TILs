#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n, k;
    string t;
    cin >> n >> k >> t;
    vector<string> v;

    for(int i = 0; i < n; i++) {
        string temp;
        cin >> temp;
        bool check = 1;

        for(int j = 0; j < t.size(); j++) {
            if(temp[j] != t[j]) check = 0;
        }

        if(check) v.push_back(temp);
    } 

    sort(v.begin(), v.end());
    cout << v[k - 1];

    return 0;
}