#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    // 배열 크기 동적으로 조정
    vector<int> arr(2001, 0);
    int start = 1000;

    for(int i = 0; i < n; i++) {
        int x;
        char c;
        cin >> x >> c;

        // 이동한 영역을 배열에 표시
        if(c == 'R') {
            for(int j = start; j < start + x; j++)
                arr[j]++;
            start += x;
        } else if(c == 'L') {
            for(int j = start - x + 1; j <= start; j++)
                arr[j]++;
            start -= x;
        }
    }

    int sum = 0;
    
    // 2번 이상 지나간 영역의 크기 계산
    for(int i = 0; i < arr.size(); i++)
        if(arr[i] >= 2) sum++;

    cout << sum;

    return 0;
}