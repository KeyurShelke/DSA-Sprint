#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;

    while (n > 0) {
        int digit = n % 10;  // get the last digit
        sum += digit;        // add it to the sum
        n = n / 10;          // remove the last digit
    }

    cout << sum;
    return 0;
}
