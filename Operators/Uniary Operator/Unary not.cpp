/*
This operator is used to convert “true” to “false” and vice versa.
*/

#include<iostream>
using namespace std;

int main(){
    int a=10, b=2;

    cout<<"Converting the ans from false to true"<< !(a<b)<<endl;
    cout<<"The original result "<< (a<b)<<endl;

    return 0;
}