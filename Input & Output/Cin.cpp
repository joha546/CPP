/*
To take input from the user via console, we use the cin statement. 

cin is a predefined variable that reads data from the keyboard with the extraction operator (>>).
*/

#include<iostream>
using namespace std;
int main() {
    int principal, time;
    double rate, si;
    cout << "Enter Principal Amount: ";
    cin >> principal;
    cout << "Enter Rate of Interest: ";
    cin >> rate;
    cout << "Enter Time period ";
    cin >> time;
    si = (principal * rate * time) / 100;
    cout << "Simple Interest: " << si;
}
