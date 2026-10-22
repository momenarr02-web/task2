#include <iostream>
using namespace std;

int main() {
    int speed;
    cout << "Enter car's speed: ";
    cin >> speed;
    
    if (speed > 60) {
        cout << "Over the speed limit" << endl;
    } else {
        cout << "Safe speed" << endl;
    }
    
    return 0;
}
