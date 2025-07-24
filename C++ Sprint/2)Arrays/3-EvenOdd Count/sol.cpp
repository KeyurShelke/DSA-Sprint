#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int num;
    int evenCount = 0, oddCount = 0;

    for (int i = 0; i < N; i++) {
        cin >> num;
        if (num % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    cout << evenCount << oddCount; // No spaces or newline after output
    return 0;
}
