#include <bits/stdc++.h> 
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    //Write your code here
    int s,e,w;
    cin>>s;
    cin>>e;
    cin>>w;

    for(int f=s; f<=e; f+=w){
        double c=(f-32)*5.0/9.0;

        cout << f << "\t\t";
        if(c>=0) {
            cout<<floor(c)<<endl;
        } else{
            cout<<ceil(c)<<endl;
        }
    }
    return 0;
}