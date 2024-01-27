#include <iostream>
using namespace std;

int main(){
    int arr[]= {40,50,60,70,80};
    for(auto element:arr){
        cout<<element<<" ";
    }
    return 0;
}

/*
The important point to note when using while loop is that we need to use increment or decrement statement inside 
while loop so that the loop variable gets changed on each iteration, and at some point, the condition returns false.
 This way, we can end the execution of the while loop. Otherwise, the loop would execute indefinitely.
*/