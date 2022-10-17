#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

//convert degrees to radian
float cal_cos(float ang){
    ang *= (M_PI / 180.00);
    return cos(ang);
}

//math for third side
float side_c(int a, int b, float c){
    float angle = cal_cos(c);
    return sqrt(pow(a,2) + pow(b,2) - 2 * a * b * angle);
}

//call functions to test
int main(){
    int a, b;
    float c;
        cout<< "What is a: ";
            cin>> a;
        cout<< "What is b: ";
            cin>> b;
        cout<< "What is the degrees?: ";
            cin>> c;
        cout<< "The third side (c) is: "<< fixed << setprecision(2) << side_c(a, b, c);
    return 0;
}


