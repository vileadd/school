//header/library 
#include <iostream>
#include <math.h>
#include <iomanip>	
using namespace std;

int main (){
    double leg_a,leg_b,hypotenuse;
        cout<<"Enter Leg A: ";
            cin>> leg_a;
        cout<<"Enter Leg B: ";
            cin>> leg_b;
    hypotenuse = sqrt(pow(leg_a,2) + pow(leg_b,2));
        cout<< "The Hypotenuse of the Triangle is: "<< fixed << setprecision(2) << hypotenuse;
    return 0;
}
