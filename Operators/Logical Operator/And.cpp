/*
This operator returns true(1), if both the conditions are true else returns false(0).
*/

#include<iostream>
using namespace std;
int main() {
    int a = 10;
    int b = 20;
    int c = 30;
    cout << ((b > a) && (c > b)) << endl; // true
    cout << ((b > a) && (c < b)); // false
    return 0;
}