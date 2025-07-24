#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int arr[N]; // fixed-size array

    // Input loop
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Output loop
    for (int i = 0; i < N; i++) {
        cout << arr[i];
        if (i != N - 1) {
            cout << " "; // add space between elements, but not after last
        }
    }

    return 0;
}
