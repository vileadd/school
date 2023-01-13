#include <iostream>
using namespace std;

int main(){
    int num[10];
    for (int i = 0; i < 10; i++)
    {
        cout<< "Enter Number "<< (i+1) << ": ";
        cin>> num[i];
    }
    cout<< "Even: ";
    for (int j = 0; j < 10; j++)
    {
        if (num[j]%2==0){
        cout<< num[j] <<" ";
    }
    }
    cout<< "\nOdd: ";
     for (int j = 0; j < 10; j++)
    {
        if (num[j]%2==1){
        cout<< num[j] <<" ";
    }
    }
    return 0;
}