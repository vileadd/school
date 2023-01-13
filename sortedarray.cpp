#include <iostream>
using namespace std;


int n;
void sortArr(int arr[]){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-i; j++){
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

}

int main(){
    int arr[100];
    cout<<"Enter the size of the array: ";
    cin>> n;
    for (int i = 0; i < n; i++)
    {
        cout<<"Array element "<< i+1 << ": ";
        cin>> arr[i];
    }
    sortArr(arr);
    cout<<"The sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            cout<< arr[i] << " ";
        }
        
    }
    return 0;
}