#include <iostream>

using namespace std;

int main() {
    int hour;
    cout << "Enter the hour (0 to 23): ";
    cin >> hour;

    if (hour >= 0 && hour <= 11) {
        cout << "AM" << endl;
    }
    else if (hour >= 12 && hour <= 23) {
        cout << "PM" << endl;
    }
    else {
        cout << "Invalid hour!" << endl;
    }

    return 0;
}
