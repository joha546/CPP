#include <iostream>
using namespace std;

int main()
{
    int age = 15;
    if (age >= 14)
    {
        if (age >= 18)  
            cout << "You are an adult";
        else
            cout << "You are a teenager";
    }
    else
    {
        if (age > 0)
            cout << "You are a child";
        else
            cout << "Invaild age";
    }
    return 0;
}