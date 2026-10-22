#include <iostream>
using namespace std;

int main() {
    double mark, sum = 0;
    int count = 0;

    cout << "Enter marks (-1 to stop): ";
    while (true) {
        cin >> mark;
        if (mark == -1) {
            break;
        }
        sum += mark;
        count++;
    }

    if (count > 0) {
        cout << "Average = " << sum / count << endl;
    } else {
        cout << "No marks entered." << endl;
    }

    return 0;
}
