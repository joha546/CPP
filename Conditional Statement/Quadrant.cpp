#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int x,y;
    cin>>x>>y;

    if(x>0 && y>0){
        cout<<"1st Quadrant"<<endl;
    }
    else if(x<0 && y>0){
        cout<<"2nd Quadrant"<<endl;
    }
    else if(x<0 && y<0){
        cout<<"3rd Quadrant"<<endl;
    }
    else if(x>0 && y<0){
        cout<<"4th Quadrant"<<endl;
    }
    else if(x==0 && y>0){
        cout<<"x axis"<<endl;
    }
    else if(x>0 && y==0){
        cout<<"x axis"<<endl;
    }
    else if(x==0 && y==0){
        cout<<"Origin"<<endl;
    }
    return 0;
}