#include <iostream>
#include <math.h>
using namespace std;




int main(){
    double x1,x2,y1,y2, slope;
    cout<<"Enter X1: ";
    cin>>x1;
    cout<<"Enter Y1: ";
    cin>>y1;
    cout<<"Enter X2: ";
    cin>>x2;
    cout<<"Enter Y2: ";
    cin>>y2;
    slope = (y2-y1)/(x2-x1);
    cout<< "Equation of the line with endpoints ("<<x1<<","<<y1<<") and ("<<x2<<","<<y2<<"):";
    cout<< "Y= "<< slope << "X + "<< y2-slope*x2;
    return 0;
}