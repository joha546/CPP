#include<iostream>
using namespace std;

int main(){
    int number;
    cin >> number;
    if (number % 2 == 0) {
        cout << "The Number Entered is Even";
    } else {
        cout << "The Number Entered is Odd";
    }
    return 0;
}