#include <iostream>
#include <cmath>
using namespace std;

int prime[10];
int composite[10];

void checkPrime(int list[]){
    int temp = 69;
    for (int i = 0; i < 10; i++){
        temp = 69;
        for (int j = 2; j <= list[i]/2; j++){
            if (list[i] % j == 0){
            temp++;
            }
        }
        if (temp != 69){
            composite[i] = list[i];
        }else{
            prime[i] = list[i];
        }
    }
}

int main(){
    int num[10];
    for (int i = 0; i < 10; i++)
    {
        cout<<"Enter Number "<< i+1 <<": ";
        cin>> num[i];
    }
    checkPrime(num);
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 9-i; j++){
            if (prime[j] > prime[j+1])
            {
                int temp = prime[j];
                prime[j] = prime[j+1];
                prime[j+1] = temp;
            }
        }
    }
    cout<< "Prime: ";
    for (int i = 0; i < 10; i++)
    {  
        if (prime[i] != 0 && prime[i] != 1)
        {
            cout<<prime[i]<< " ";
        }
    }

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 9-i; j++){
            if (composite[j] < composite[j+1])
            {
                int temp = composite[j+1];
                composite[j+1] = composite[j];
                composite[j] = temp;
            }
        }
    }
    cout<< "\nComposite: ";
    for (int i = 0; i < 10; i++)
    {  
        if (composite[i] != 0 && prime[i] != 1)
        {
            cout<<composite[i]<< " ";
        }
    }
    return 0;
}