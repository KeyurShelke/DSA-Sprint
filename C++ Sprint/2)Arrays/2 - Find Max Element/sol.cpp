#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int arr[N];

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int maxNum = arr[0];
    for (int i = 1; i < N; i++) {
        if (arr[i] > maxNum) {
            maxNum = arr[i];
        }
    }

    cout << maxNum; // Do NOT use endl or add a space
    return 0;
}
