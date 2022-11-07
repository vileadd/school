#include <iostream>
using namespace std;

int main(){
    int num, i, revNum, remainder;
    cout << "Enter a num: ";
    cin >> num;
    i = num;
    while (num != 0)
    {
        remainder = num % 10;
        revNum = revNum * 10 + remainder;
        num /= 10;
    }
    
    cout << "Reverse of a Number " << i << " is " << revNum;
    return 0;
}