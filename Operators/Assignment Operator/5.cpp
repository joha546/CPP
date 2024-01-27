/*
%=: This assignment operator is used to modulo the left operand with the right operand and then assign it to a 
variable on the left.
*/

#include<iostream>
using namespace std;
int main(){
    int num = 19;
    num %= 5; // num = num % 5;
    cout << num;
    return 0;
}