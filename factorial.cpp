#include <iostream>
using namespace std;

int main() {
    int n;
    long long factorial = 1;

    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    cout << n << "! = " << factorial << endl;

    return 0;
}
