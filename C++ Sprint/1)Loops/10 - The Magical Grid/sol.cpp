#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int rows = N * 3 + 1;
    int cols = M * 3 + 1;

    for (int i = 0; i < rows; i++) {
        if (i % 3 == 0) {
            // Every 3rd row (fully *)
            for (int j = 0; j < cols; j++) {
                cout << "*";
            }
        } else {
            // Non-3rd rows: repeat "*.." M times, then one more '*'
            for (int j = 0; j < M; j++) {
                cout << "*..";
            }
            cout << "*";
        }

        if (i != rows - 1) cout << endl; // Avoid extra newline at end
    }

    return 0;
}
