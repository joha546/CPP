/*
The C++ cout is used to produce output on the standard output device, usually the display screen or 
console. 

cout is a pre-defined variable that displays some output or text using the insertion operator(<<).
*/

#include <iostream>
using namespace std;
int main() {
    int age = 21;
    string firstName = "King";
    string lastName = "Kong";
    cout << "My name is " << firstName << " " << lastName << endl;
    cout << "My age is " << age << endl;
    return 0;
}