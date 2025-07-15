#include <iostream>
using namespace std;

int main() {
    int code;
    cin >> code;

    switch (code) {
        case 1:
            cout << "Samosa";
            break;
        case 2:
            cout << "Kachori";
            break;
        case 3:
            cout << "Jalebi";
            break;
        case 4:
            cout << "Chai";
            break;
        default:
            cout << "Invalid choice";
    }

    return 0;
}
