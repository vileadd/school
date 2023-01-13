#include <iostream>
using namespace std;



int main(){
    int n;
    char c;
    int a,b,ans;
    do
    {
    cout<<"********************\n";
    cout<<"        MENU        \n";
    cout<<"********************\n";
    cout<<"   1.Add\n";
    cout<<"   2.Subtract\n";
    cout<<"   3.Multiply\n";
    cout<<"   4.Divide\n";
    cout<<"   5.Modulus\n";
    cout<<"Enter your choice(1-5): ";
    cin>> n;
    cout<<"Enter your two integer numbers: ";
    cin>> a >> b;
    
    switch (n)
    {
    case 1:
        ans = a + b;
        cout<<"\n\nResult: "<< ans;
        break;
    
    case 2:
        ans = a - b;
        cout<<"\n\nResult: "<< ans;
        break;
    
    case 3:
        ans = a * b;
        cout<<"\n\nResult: "<< ans;
        break;
    
    case 4:
        ans = a / b;
        cout<<"\n\nResult: "<< ans;
        break;
    
    case 5:
        ans = a % b;
        cout<<"\n\nResult: "<< ans;
        break;
    
    default:
    cout<<"Wrong Choice!";
        break;
    }
    cout<< "\nPress y or Y to continue: ";
    cin>> c;
    } while (c == 'y' && c == 'Y');

    return 0;
}