#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;


double cal_area(double a, double b, double c){
    double s = (a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

int main(){
    int a, b, c;
    cout<< "Enter first side: ";
    cin>> a;
    cout<< "Enter second side: ";
    cin>> b;
    cout<< "Enter third side: ";
    cin>> c;
    cout<< "The value of s is: " << double (a+b+c)/2 << endl;
    cout<< "The area of the triangle is: "<< fixed << setprecision(4) << cal_area(a, b, c);
    return 0;
}