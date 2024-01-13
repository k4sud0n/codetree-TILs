#include <iostream>
#include <algorithm>

using namespace std;

// class Array {
// public:
//     int number;
//     int index;

//     Array(int number = 0, int index = 0) {
//         this->number = number;
//         this->index = index;
//     }
// };

// bool cmp(Array a1, Array a2) {
    
// }

int main() {
    int n = 0;
    cin >> n;
    int originArray[7] = {0};
    int sortedArray[7] = {0};

    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        originArray[i] = temp; 
        sortedArray[i] = temp;
    }

    sort(sortedArray, sortedArray + n);

    for(int i = 0; i < n; i++) {
        for(int j = 1; j <= n; j++) {
            if(originArray[i] == sortedArray[j]) {
                cout << j + 1 << " ";
                break;
            }
        }
    }

    return 0;
}