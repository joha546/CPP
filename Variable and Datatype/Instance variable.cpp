/*
Instance variables are non-static variables and belong to an instance of a class and are declared in a
 class outside any method, constructor, or block. These variables are created when an object of the 
 class is created and destroyed when the object is destroyed and are accessible to all the 
 onstructors, methods, or blocks in the class. Each object of the class within which the instance 
 variable is declared will have its own separate copy or instance of this variable.
Unlike local variables, we may use access specifiers for instance variables.
*/


#include<iostream>
using namespace std;

class A{

    int a;     // by default private instance variables
    char b;
    public:
        int c;

    void function(){
        a = 10;
        cout<<a<<endl;
    }
};