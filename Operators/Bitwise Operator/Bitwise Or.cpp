/*
 It takes two numbers as operands and does OR on every bit of two numbers. The result of OR is 1 if any of the two 
 bits is 1. Mind that the commutative property holds true here.

 

    That is,

              1 | 1 = 1

              1 | 0 = 1

              0 | 0 = 0 
*/

#include<iostream>
using namespace std;
int main() {
    int a = 6; 
    int b = 7; 
    cout << "a | b = " << (a | b); //0110 | 0111 = 0111 = 7
    return 0;
}