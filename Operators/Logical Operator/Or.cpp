/*
This operator returns true(1) if any one of the conditions is true. 

*/

#include<iostream>
using namespace std;
int main() {
    int a = 10;
    int b = 20;
    int c = 30;
    cout << ((b > a) || (c < b)); // true
    cout << ((b < a) || (c < b)); // false
    return 0;
}