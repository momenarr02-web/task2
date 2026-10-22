#include <iostream>
using namespace std;

int main() {
    double billAmount, amountToPay;
    cout << "Enter bill amount: ";
    cin >> billAmount;
    
    if (billAmount >= 1000) {
        amountToPay = billAmount - (billAmount * 0.10);
    } else {
        amountToPay = billAmount;
    }
    
    cout << "Amount to pay: " << amountToPay << endl;
    
    return 0;
}
