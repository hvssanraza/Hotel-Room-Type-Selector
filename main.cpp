#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "---Hotel Room Reservation---" << endl;
    cout << "Available Room Types: " << endl;
    cout << "1: Single Room" << endl;
    cout << "2: Double Room" << endl;
    cout << "3: Suite" << endl;
    cout << "4: Deluxe Suite" << endl;
    cout << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "You have selected: Single Room" << endl;
        cout << "Cost per night: Rs 1000" << endl;
        break;
        case 2:
            cout << "You have selected: Double Room" << endl;
        cout << "Cost per night: Rs 1500" << endl;
        break;
        case 3:
            cout << "You have selected: Suite" << endl;
        cout << "Cost per night: Rs 2500" << endl;
        break;
        case 4:
            cout << "You have selected: Deluxe Suite" << endl;
        cout << "Cost per night: Rs 3500" << endl;
        break;
        default:
            cout << "Invalid choice! Please select a valid room type (1-4)." << endl;
        break;
    }

    return 0;
}
