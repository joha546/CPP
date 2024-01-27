#include <iostream>
using namespace std;

#define Area(l, b)(l * b)

int main(){
    int l,b;
    cin>> l>>b;

    int a= Area(l,b);
    cout<<a<<endl;

    return 0;
}