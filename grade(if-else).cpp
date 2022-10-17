#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    char name[15];
    float PG, MG, PFG;
    float FG;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter Prelim Grade: ";
    cin >> PG;
    cout << "Enter Midterm Grade: ";
    cin >> MG;
    cout << "Enter Prefinal Grade: ";
    cin >> PFG;
    FG = PG * .3 + MG * .3 + PFG * .4;
    cout<<fixed<<setprecision(2);
    if (FG >= 75 && FG <= 100)
    {
        cout << "Congratulations " << name << "!!!" << endl;
        cout << "Your grade is " << FG << endl;
        cout << "You passed.";
    }
    else if (FG >= 0 && FG < 75)   
    {
        cout << "Bad news " << name << "!!!" << endl;
        cout << "Your grade is " << FG << endl;
        cout << "You failed";
    }
    else 
    {
        cout << "Hi " << name << "!!!" << endl;
        cout << "Your grade "<< FG <<" is invalid." << endl;
        cout << "There is something wrong";
    }
return 0;
}
