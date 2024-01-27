/*
This operator is used to decrement the value by 1. There are two types of decrement operators.

Post-decrement operator: Post decrement operator is used to decrement the value of the variable after it has been 
evaluated for use in the expression.
Pre-decrement operator: Pre decrement operator is used to decrement the value of the variable before it’s evaluated 
in the expression. 
*/

#include<iostream>
using namespace std;
int main() {
    int num=10;
    cout<<"Post increment ="<<num--;
    // first print 10, then number is decrement to 9
    cout << "Pre-increment= "<< --num;
    // num was 9, decremented to 8 and print
    return 0;
}


/*
Output:
Post decrement = 10
Pre decrement = 8
*/
