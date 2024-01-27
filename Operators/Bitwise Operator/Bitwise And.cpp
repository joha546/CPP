/*
 It takes two numbers as operands and does AND on every bit of two numbers. The result of AND is 1 only if both 
 bits are 1. Mind that the commutative property holds true here.

    That is,

              1 & 1 = 1

              1 & 0 = 0 
*/

#include<iostream>
using namespace std;

int main(){
    int a = 6;
    int b = 7;
    cout <<(a&b)<<endl;  // //0110 & 0111 = 0110 = 6
    return 0;
}