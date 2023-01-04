#include <iostream>
#include <math.h>
using namespace std;


bool PerfectSquare(int num){
    int square;
    if (num > 0)
    {
        square = sqrt(num);
        return (square * square == num);
    }
    return false;
}


int main(){
    int num;
    cout<< "Enter Number: ";
    cin>> num;
    if (PerfectSquare(num))
        cout<< "Perfect Square";
    else
        cout<< "Not a Perfect Square";
    return 0;
}