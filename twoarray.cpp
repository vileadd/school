#include <iostream>
using namespace std;

int main(){
   int grade[5][3];
   for (int i = 0; i < 5; i++){
        cout<< "Student "<< (i+1)<< ":\n";
        for (int j = 0; j < 3; j++){
            cout<< "Enter Subject "<< (j+1) << " Grade: ";
            cin>> grade[i][j];
        }
   }

    for (int i = 0; i < 5; i++){
        int total = 0;
        cout<< "Student "<< (i+1)<< " Grade: ";
        for (int j = 0; j < 3; j++){
            cout<< grade[i][j] << " ";
            total += grade[i][j];
        }
        cout<< "\nStudent "<< (i+1)<< " Average: "<< total/3 << endl;
        cout<< endl;
    }
        int max = grade[0][0];
        int min = grade[0][0];
    for (int i = 0; i < 3; i++){

        for (int j = 0; j < 5; j++){
        
            if (grade[j][i] < min)
            {
                min = grade[j][i];
            }
            if (grade[j][i] > max)
            {
                max = grade[j][i];
            }

        }
        cout<< "Highest Grade for Subject" << (i+1)<< " : "<< max <<  endl;
        cout<< "Lowest Grade for Subject" << (i+1)<< " : "<< min <<  endl;
   }
    return 0;
}