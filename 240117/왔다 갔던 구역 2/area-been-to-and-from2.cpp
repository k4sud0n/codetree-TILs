#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, char>> commands; // 명령을 순서대로 저장

    for(int i = 0; i < n; i++) {
        int x;
        char c;
        cin >> x >> c;
        commands.push_back({x, c});
    }

    vector<int> arr(2001, 0);
    int start = 1000;

    for(const auto& command : commands) {
        int x = command.first;
        char c = command.second;

        if(c == 'R') {
            for(int j = start + 1; j <= start + x; j++)
                arr[j]++;
            start += x;
        } else if(c == 'L') {
            for(int j = start - x; j < start; j++)
                arr[j]++;
            start -= x;
        }
    }

    int sum = count_if(arr.begin(), arr.end(), [](int val) { return val >= 2; });

    cout << sum;

    return 0;
}