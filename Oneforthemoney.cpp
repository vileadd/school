#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
#define peso_val 43.33089

//convertion
double usDollar(double peso){
    return peso /= 43.33089;
}

double euro(double peso){
    return peso /= (peso_val/0.734719);
}

double yuan(double peso){
    return peso /= (peso_val/6.346934);
}

double koruna(double peso){
    return peso /= (peso_val/18.77263);
}

double krone(double peso){
    return peso /= (peso_val/5.449007);
}

double sheqel(double peso){
    return peso /= (peso_val/3.726334);
}

double dinar(double peso){
    return peso /= (peso_val/0.274588);
}

//test if algo is correct
int main(){
    double peso;
    cout<< "Enter Philippine peso: ";
    cin>> peso;
    cout<< setprecision(7);
    cout<< "The amount's equivalent to:\n"; 
    cout<< "US Dollar is" << setw(8) << ":\t" << usDollar(peso) << endl;
    cout<< "Euro" << setw(16) << ":\t" << euro(peso) << endl;
    cout<< "Yuan" << setw(16) << ":\t" << yuan(peso) << endl;
    cout<< "Koruna" << setw(14) << ":\t" << koruna(peso) << endl;
    cout<< "krone" << setw(15) << ":\t" << krone(peso) << endl;
    cout<< "Sheqel" << setw(14) << ":\t" << sheqel(peso) << endl;
    cout<< "Dinar" << setw(15) << ":\t" << dinar(peso) << endl;
    return 0;
}