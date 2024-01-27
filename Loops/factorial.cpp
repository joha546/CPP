#include <iostream>
using namespace std;

int factorial(int n){
    int i,mul=1;
    for(i=1;i<=n; i++){
        mul *=i;
    }
    return mul;
}
int main() {
    //Write your code here
    int n,f;
    cin>>n;
    f = factorial(n);
    cout<<f<<endl;

    return 0;
}