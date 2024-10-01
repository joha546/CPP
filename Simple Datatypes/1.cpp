#include<iostream>
using namespace std;

int main(){
    const int FT_PER_INCH = 12;     // symbolic constant

    int height;
    cin >> height;

    int feet = height / FT_PER_INCH;
    int inches = height % FT_PER_INCH;

    cout << "Your height is: " << feet << " ft " << inches << " inch." << endl;
    return 0;
}