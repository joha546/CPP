#include<iostream>
using namespace std;
int main() {
    int num1 = 6;
    int num2 = -2;
    // Performing bitwise complement
    cout << num1 << "’s bitwise complement = " << ~num1;
    cout << num2 << "’s bitwise complement = " << ~num2;
    return 0;
}

/*
Output:
6’s bitwise complement = -7
-2’s bitwise complement = 1
*/
