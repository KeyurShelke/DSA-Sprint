#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> heights(N);
    for (int i = 0; i < N; i++) {
        cin >> heights[i];
    }

    int maxVal = heights[0];
    int minVal = heights[0];

    for (int i = 1; i < N; i++) {
        if (heights[i] > maxVal) {
            maxVal = heights[i];
        }
        if (heights[i] < minVal) {
            minVal = heights[i];
        }
    }

    cout << maxVal << endl;
    cout << minVal;

    return 0;
}
