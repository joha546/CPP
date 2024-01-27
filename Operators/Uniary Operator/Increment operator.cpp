/*
This operator is used to increment the value by 1. There are two types of increment operators

Post-increment operator: Post increment operator is used to increment the variable’s value after it has been 
evaluated for use in the expression.
Pre-increment operator: Pre increment operator is used to increment the variable’s value before it’s evaluated in 
the expression.
*/

#include<iostream>
using namespace std;
int main(){
    int num=10;
    cout<<"Post increment = "<<num++;
    // first print 10, then number is increment to 11
    cout<<"Pre increment = "<<++num;
    // num was 11, incremented to 12 and print
    return 0;
}

/*

Output:
Post increment = 10
Pre increment = 12

*/