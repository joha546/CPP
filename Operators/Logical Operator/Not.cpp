/*
This operator is used to reverse the operand’s value. If the operand’s value is true, it returns false(0), 
and if the value of the operand is false, it returns true(1).
*/

#include<iostream>
using namespace std;
int main() {
    int a = 10;
    int b = 20;
    cout << (!(a == b)); // true
    cout << (!(b > a)); // false
    return 0;
}