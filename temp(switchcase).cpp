#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	float Fah, Cel;
	char ltr;
	cout << "TEMPERATURE CONVERTER\n";
	cout << "A - Centigrade to Fahrenheit\n";
	cout << "B - Fahrenheit to Centigrade\n";
	cout << "X - Exit\n";
	cout << "Enter your choice:";
	cin >> ltr;
	switch (ltr) {
	case 'a':  case 'A': {
		cout << "Enter Celsius temperature:";
		cin >> Cel;
		Fah = 9 * Cel / 5 + 32;
		cout << fixed << setprecision(2);
		cout << Cel << " degrees is " << Fah << " in Fahrenheit.";
		}
		  break;
	case 'b':  case 'B': {
		cout << "Enter Fahrenheit temperature:";
		cin >> Fah;
		Cel = 5 * (Fah - 32) / 9;
		cout << fixed << setprecision(2);
		cout << Fah << " degrees is " << Cel << " in Celsius";
		}
		  break;
	case 'x':  case 'X':  exit(0);
	default: cout << "Wrong entry.Not in the choices.";
	}
	return 0;
}
