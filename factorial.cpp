#include <iostream>
using namespace std;
// Function to calculate factorial
long long factorial(int n) {
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return -1;
    }
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}
int main() {
    int number;
    cout << "Enter a non-negative integer: ";
    cin >> number;
    long long result = factorial(number);
    if (result != -1) {
        cout << "Factorial of " << number << " is " << result << endl;
    }
    return 0;
}
