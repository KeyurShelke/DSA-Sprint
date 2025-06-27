#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int attempt;
    bool granted = false;
    int count = 0;

    do {
        cin >> attempt;
        if (attempt == 2025) {
            granted = true;
            break; // Stop checking further
        }
        count++;
    } while (count < n);

    if (granted) {
        cout << "Access Granted";
    } else {
        cout << "Access Denied";
    }

    return 0;
}
