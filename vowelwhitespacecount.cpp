#include <iostream>
#include <stdio.h>
using namespace std;

int countA, countE, countI, countO, countU, whitespace;

void vowelCount(char str[]){
    for (int i = 0; str[i]; i++)
    {
        if (str[i] == 'A')
        {
            countA++;
        }
        else if (str[i] == 'E')
        {
            countE++;
        }
        else if (str[i] == 'I')
        {
            countI++;
        }
        else if (str[i] == 'O')
        {
            countO++;
        }
        else if (str[i] == 'U')
        {
            countU++;
        }
        else if (str[i] == ' ')
        {
            whitespace++;
        }
        
    }
}

int main(){
    char str[100];
    cout<<"Enter a string: ";
    cin.get(str, 100);
    vowelCount(str);
    cout<<"Vowels:\n";
    cout<<"A "<< countA<< endl;
    cout<<"E "<< countE<< endl;
    cout<<"I "<< countI<< endl;
    cout<<"O "<< countO<< endl;
    cout<<"U "<< countU<< endl;
    cout<<"Whitespaces - "<<whitespace;
    return 0;
}