/*
Write a program to input an integer N and print the sum of all its even digits and all its odd digits separately.

Digits mean numbers, not the places! If the given integer is "13245", the even digits are 2 and 4, and the odd 
digits are 1, 3, and 5.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    //Write your code here
    int n,i, sum1=0, sum2=0;
    cin>>n;
    
    while(n!=0){
        i = n%10;
        if(i%2==0){
            sum1+=i;
        }
        else{
            sum2 +=i;
        }
        n /= 10;
    }
    cout<<sum1<<" "<<sum2<<endl;
    return 0;
}