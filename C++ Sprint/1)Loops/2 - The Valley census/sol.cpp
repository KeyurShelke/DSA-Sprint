#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> energy(N);
    for (int i = 0; i < N; i++) {
        cin >> energy[i];
    }

    int evenCount = 0, oddCount = 0, positiveCount = 0, negativeCount = 0;

    for (int i = 0; i < N; i++) {
        if (energy[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }

        if (energy[i] > 0) {
            positiveCount++;
        } else if (energy[i] < 0) {
            negativeCount++;
        }
    }

    // Print in the exact required format
    cout << "Even: " << evenCount << endl;
    cout << "Odd: " << oddCount << endl;
    cout << "Positive: " << positiveCount << endl;
    cout << "Negative: " << negativeCount;

    return 0;
}
