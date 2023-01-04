#include <iostream>
using namespace std;


int SecondHighest(int arr[]){
    int largest;
    int second;
   if (arr[0] > arr[1])
   {
    largest = arr[0];
    second = arr[1];
   }
   else
   {
    largest = arr[1];
    second = arr[0];
   }
   
   for (int i = 0; i < 10; i++)
   {
    if (arr[i] > largest)
    {
        second = largest;
        largest = arr[i];
    }
        else if (arr[i] > second && arr[i] != largest){
            second = arr[i];
        }
    }
   
    return second;
}

int main(){
    int arr[10];
    cout<< "Enter 10 digits\n";
    for (int i = 0; i < 10; i++)
    {
        cout<< "Enter Number " << (i+1)<< ": ";
        cin>> arr[i];
    }
    
    cout<< "Second highest number is "<< SecondHighest(arr);
    
    
    

    return 0;
}