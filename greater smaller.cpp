#include <iostream>
using namespace std;

int main()
 {
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    if (num1 > num2) {
        cout << "Result: " << num1 << " is greater" << endl;
    } else if (num2 > num1) {
        cout << "Result: " << num2 << " is greater" << endl;
    } else {
        cout << "Result: Both numbers are equal" << endl;
    }

    return 0;
}
