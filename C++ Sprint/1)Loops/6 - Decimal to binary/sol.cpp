#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 0) {
        cout << "0";
        return 0;
    }

    string binary = "";

    while (n > 0) {
        int remainder = n % 2;
        binary = char(remainder + '0') + binary;  // prepend '0' or '1'
        n = n / 2;
    }

    cout << binary;
    return 0;
}
