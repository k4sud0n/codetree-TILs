#include <iostream>
#include <algorithm>

using namespace std;

class Array {
public:
    int number;
    int index;

    Array(int number = 0, int index = 0) {
        this->number = number;
        this->index = index;
    }
};

bool cmp(Array a1, Array a2) {
    if(a1.number == a2.number) return a1.index < a2.index;
    else return a1.number < a2.number;
}

int main() {
    int n = 0;
    cin >> n;
    Array arr[n];
    int answer[n];

    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        arr[i] = Array(temp, i + 1);
    }

    sort(arr, arr + n, cmp);

    for(int i=0;i<n;++i){
        Array point = arr[i];
        answer[point.index - 1] = i+1;
    }

    for(int i=0;i<n;++i){
        cout << answer[i] << " ";
    }
    
    return 0;
}