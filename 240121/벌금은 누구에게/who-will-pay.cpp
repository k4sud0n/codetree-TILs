#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v;
    int cnt = -1;

    for(int i = 0; i < m; i++) {
        int student_num;
        cin >> student_num;
        v.push_back(student_num);

        if(count(v.begin(), v.end(), student_num) == k) {
            cnt = student_num;
            break;
        }
    }

    cout << cnt;

    return 0;
}