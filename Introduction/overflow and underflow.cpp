/*
Overflow occurs when we assign a value to more than its range, and Underflow is the opposite of the 
overflow. In the case of overflow and underflow, the C++ compiler doesn’t throw any errors. It simply
 changes the value. 

The minimum value of int data type is -2,147,483,648  (INT_MIN) and after decrementing 1 on this 
value, it will return 2,147,483,647 (INT_MAX). This is known as underflow.

*/

#include <iostream>
using namespace std;
int main() {
    int x = INT_MAX; //2147483647
    int y = INT_MIN; //-2147483648
    x = x + 1;
    y = y - 1;
    cout << x << endl;
    cout << y;
}