#include <iostream>
using namespace std;


void checkEven(int list[]){
    for (int i = 0; i < 10; i++){
        if (list[i]%2 == 0){
            cout<< i << " ";
        }
    }
    
}
int main(){
    int list[10];
    cout<<"Enter 10 numbers: ";
    for (int i = 0; i < 10; i++)
    {
        cin>> list[i];
    }
    cout<<"Even numbers are located at indices: ";
    checkEven(list);
    return 0;
}