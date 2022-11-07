#include <iostream>

using namespace std;

int main()
{
    int num, ans;
    cout << "Enter any positive number: ";
    cin >> num;
    cout << "Multiplication Table of " << num << endl;
    for (int i = 1; i <= 10; i++){
        ans = num * i;
        cout << num << " * " << i << " = " << ans << "\n";
    }
        
    return 0;
}