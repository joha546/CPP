/*
Static variables are declared using the keyword ‘static’, within a class outside any method, 
constructor, or block. Space is allocated only once for static variables i.e we have a single copy 
of the static variable corresponding to a class, unlike instance variables. The static variables are 
created at the start of the program and get destroyed at the end of the program i.e the lifetime of 
a static variable is the lifetime of the program. Static variables are initialized only once and they
 hold their value throughout the lifetime of the program. 
*/

#include<iostream>
using namespace std;

class B{
    static int b;
    void function(){
        ++b;
    }

};