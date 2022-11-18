#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;


double area, l, w, r;

void Area(char shape){
    switch (shape)
    {
    case 'R': case 'r':
    cout << "Enter length: ";
    cin >> l;
    cout << "Enter width: ";
    cin >> w;
    area = l * w;
    cout << "The area of the rectangle is: " << area;
        break;
        
    case 'C': case 'c':
    cout << "Enter radius: ";
    cin >> r;
    cout << "The area of the circle is: " <<  M_PI * pow(r , 2);
        break;
        
    default:
        cout << "Wrong Shape!";
        break;
    }
}

int main(){
    char shape;
    cout << fixed << setprecision (2);
    cout << "S H A P E S\n\n";
    cout << "[R] - Rectangle\n";
    cout << "[C] - Circle\n";
    cout << "Enter your choice: ";
    cin >> shape;
    Area(shape);
   return 0;

}
