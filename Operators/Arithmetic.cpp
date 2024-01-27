#include<iostream>
using namespace std;

int main() {
    int a = 50, b = 20;
    cin >> a, b;
    int addition = a + b;
    int subtraction = a - b;
    int mul = a * b;
    int division = a / b;
    int modulus = a % b;
    cout << "The addition of " << a << " and " << b << " is: " << addition;
    cout << "The subtraction of " << a << " and " << b << " is: " << subtraction;
    cout << "The multiplication of " << a << " and " << b << " is: " << mul;
    cout << "The division of " << a << " and " << b << " is: " << division;
    cout << "The modulus of " << a << " and " << b << " is: " << modulus;
    return 0;
}