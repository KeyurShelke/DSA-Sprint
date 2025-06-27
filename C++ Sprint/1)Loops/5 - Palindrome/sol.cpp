#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int original = n;       // Store original number
    int reversed = 0;

    while (n > 0) {
        int digit = n % 10;           // Extract last digit
        reversed = reversed * 10 + digit; // Build reversed number
        n = n / 10;                   // Remove last digit
    }

    if (original == reversed) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}
