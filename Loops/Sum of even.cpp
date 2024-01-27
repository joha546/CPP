#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int n, sum=0;
    cin>>n;
    for(int i=2; i<=n; i+=2){
        sum +=i;
    }
    cout<<sum<<endl;

    return 0;
}