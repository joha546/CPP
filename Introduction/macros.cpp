#include <iostream>
using namespace std;

// macro definition
#define Limit 5   // There is no semicolon(‘;’) at the end of the macro definition.

int main()
{
    int a;
    for(int i=a; i<=Limit; i++){
        cout<<i<<" ";
    }
    return 0;
}

