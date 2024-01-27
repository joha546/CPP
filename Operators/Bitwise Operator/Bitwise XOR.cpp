/*
It takes two numbers as operands and does XOR on every bit of two numbers. The result of XOR is 1 if the two bits 
are different. Mind that the commutative property holds true here.
*/

#include<iostream>
using namespace std;
int main() {
    int a = 6; 
    int b = 7; 
    cout << "a ^ b = " << (a ^ b); //0110 ^ 0111 = 0001 = 1
    return 0;
}