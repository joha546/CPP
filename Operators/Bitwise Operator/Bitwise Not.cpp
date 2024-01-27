/*
 It takes one number and inverts all bits of it.
    That is,

              ~1 = 0

              ~0 = 1
*/

#include<iostream>
using namespace std;
int main() {
    
    int a = 6; 
    // Binary representation of 6 is 00000000000000000000000000000110 (size of int is 32 bits)
    
    cout << "~a = " << (~a);   // ~6 = 11111111111111111111111111111001 = -7 (-ve nos. are stored in 2's complement form)
    return 0;
}