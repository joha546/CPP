#include<iostream>
using namespace std;

int main() {
    double dbl = 5.6;
    int res = (int)dbl + 10; // Here dbl is explicity converted to int i.e value of 
    // dbl becomes 5.
    cout << "Result = " << res; 
    return 0;
}