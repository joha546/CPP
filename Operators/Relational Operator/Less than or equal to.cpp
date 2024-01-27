/*
This operator is used to check whether the first operand is less than or equal to the second operand or not. 
It returns true(1) if the first operand is less than or equal to the second operand; else, return false(0).
*/

#include<iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 5;
    cout << (a <= b);
    // It returns false because the first operand is
    //not less than or equal to the second operand.
    return 0;
}