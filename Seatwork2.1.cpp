#include <iostream>

using namespace std;

int numDigits(int num)
{
    int digits = 0; 
    while (num != 0){
        num /= 10; digits++;
    }
    return digits;
}

int main(){
    int num;

    cout << "Enter a number: ";
    cin >> num;
    cout << "Number of digits are: " << numDigits(num) << endl;
    if (numDigits(num) <= 4){
        if (num > 0){
            cout << num << " is a positive number!";
        } else {
            cout << num << " is a negative number!";
        }
    } else {
        cout << "You can only input up to 4 digits!";
    }
    return 0;
}