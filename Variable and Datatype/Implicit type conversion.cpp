/*
It is automatically performed by the compiler itself to ensure that the calculations between the 
same data types take place and avoid any loss of data. Such types of conversions take place when 
more than one data type is present in an expression. The rule associated with implicit type 
conversions involves upgrading the data type of all the variables to the data type of the variable 
with the “largest data type.

bool -> char -> short int -> int -> unsigned int -> long -> unsigned -> long long -> float -> 
double -> long double
*/

#include<iostream>
using namespace std;

int main()
{
    int a=200;
    char c= 'c';
    float d=7.5;

    int sum = a+c;// here letter is implicitly converted to int and its value is the             
    //  ASCII value of ‘c’ i.e. 99
    cout<<a<<endl;
    cout<<sum<<endl;

    return 0;
}