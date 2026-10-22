#include <iostream>
using namespace std;

int main() {
    int temp;
    cout << "Enter temperature: ";
    cin >> temp;
    
    if (temp > 30) {
        cout << "Result: Hot" << endl;
    } else {
        cout << "Result: Cold" << endl;
    }
    
    return 0;
}
