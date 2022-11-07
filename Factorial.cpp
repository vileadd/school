#include <iostream>
using namespace std;

int main(){
    int num, factorial = 1, i = 1;
    cout << "Enter any positive number: ";
    cin >> num;
    do
    {
        factorial *= i;
        i++;
    } while (i <= num);

    cout << "Factorial of Number: " << num << "! is " << factorial;
    return 0;
}

