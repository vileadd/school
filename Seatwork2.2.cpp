#include <iostream>

using namespace std;

int main(){
    int num1, num2, ans;
    char sign;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Enter the operator (+, -, *, /): ";
    cin >> sign;

switch (sign){
    case '+':
        ans = num1 + num2;
        break;
    case '-':
        ans = num1 - num2;
        break;
    case '*':
        ans = num1 * num2;
        break;
    case '/':
        ans = num1 / num2;
        break;
    default:
        cout << "Incorrect sign!";
        exit(0);
}
    cout << "The result of the operation is: " << ans;
    return 0;
}