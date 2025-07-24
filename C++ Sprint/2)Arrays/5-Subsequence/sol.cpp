#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int A[N], B[M];
    for (int i = 0; i < N; i++) cin >> A[i];
    for (int i = 0; i < M; i++) cin >> B[i];

    int j = 0;  // pointer for B

    for (int i = 0; i < N; i++) {
        if (A[i] == B[j]) {
            j++; // move to next element in B
        }
        if (j == M) break;  // all of B found in A
    }

    if (j == M) cout << "YES";
    else cout << "NO";

    return 0;
}
