#include<iostream>
#include<cmath>
using namespace std;

int main(){
    const int ONE_FOOT = 12;
    const double METER = 0.0254;
    const float POUNDS = 2.2;

    int feet, inches, weights;
    cin >> feet >> inches >> weights;
    int height = (feet * ONE_FOOT) + inches;
    
    double m = height*METER;
    double pound = weights / POUNDS;

    long h = pow(m,2);
    double BMI = pound / h;
    cout << BMI << endl;
    return 0;

}