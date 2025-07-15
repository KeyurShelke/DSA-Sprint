#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        for (char ch = 'A'; ch < 'A' + i; ch++) {
            cout << ch;
        }
        if (i != N) {
            cout << endl; // avoid extra newline at the end
        }
    }

    return 0;
}
