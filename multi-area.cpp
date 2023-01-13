#include <iostream>
#include <cmath>
using namespace std;


void area_square(int &num){
    int squnits = num * num;
    cout<<"\nThe area is "<<squnits<<" sq. units\n";
}

void area_rectangle(int &l, int &w){
    int squnits = l * w;
    cout<<"\nThe area is "<<squnits<<" sq. units\n";
}


void area_triangle(int &b, int &h){
    int squnits = (b * h) / 2;
    cout<<"\nThe area is "<<squnits<<" sq. units\n";
}


void area_circle(int &r){
    int squnits = M_PI * pow(r,2);
    cout<<"\nThe area is "<<squnits<<" sq. units\n";
}



int main(){
    int n, num,l,w,b,h,r;
    do{
    cout<<"******************\n";
    cout<<"MENU\n";
    cout<<"******************\n";
    cout<<"[1] - Area of square \n";
    cout<<"[2] - Area of rectangle \n";
    cout<<"[3] - Area of triangle \n";
    cout<<"[4] - Area of circle \n";
    cout<<"[5] - Exit\n";
    cout<<"------------------\n";
    cout<<"Enter your choice: ";
    cin>> n;
    switch (n)
    {
    case 1:
    cout<<"------------------\n";
    cout<<"AREA OF SQUARE\n";
    cout<<"------------------\n";
    cout<<"Enter the side of the square: ";
    cin>> num;
        area_square(num);
        break;
    
    case 2:
    cout<<"------------------\n";
    cout<<"AREA OF RECTANGLE\n";
    cout<<"------------------\n";
    cout<<"Enter the length and width of the rectangle: ";
    cin>> l >> w;
        area_rectangle(l,w);
        break;
    
    case 3:
    cout<<"------------------\n";
    cout<<"AREA OF TRIANGLE\n";
    cout<<"------------------\n";
    cout<<"Enter the base and width of the height: ";
    cin>> b >> h;
        area_triangle(b,h);
        break;
    
    case 4:
    cout<<"------------------\n";
    cout<<"AREA OF CIRCLE\n";
    cout<<"------------------\n";
    cout<<"Enter the radius: ";
    cin>> r;
        area_circle(r);
        break;

    case 5:
    cout<<"Thank you!";
    exit(1);

    default:
    cout<<"Wrong Number!\n";
    break;
    }
    
    }while (n != 5);
    return 0;
}