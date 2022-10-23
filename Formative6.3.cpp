#include<iostream>
using namespace std;

int main() {
	int x, no;
	cout << "Enter number:";
	cin >> no;
	cout << "Multiplication Table of " << no << endl;
	x = 1;
	while (x<=10) {
		cout << no << " x " << x << " =" << no * x << "\n";
		x++;
	}
	return 0;
}
