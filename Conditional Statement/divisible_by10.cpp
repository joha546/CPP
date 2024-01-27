#include<iostream>
using namespace std;

int main(){
    int number;
    cin >> number;
    if (number % 10 == 0) {
        cout << "The Number is divisible by 10";
    } else {
        cout << "The Number is not divisible by 10";
    }
    return 0;
}