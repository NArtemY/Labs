#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	// 9 вариант
	
	double A,B, z1, z2;
	cout << "Enter A: ";
	cin >> A;
	cout << endl << "Enter B: ";
	cin >> B;
	z1 = pow((cos(A) - cos(B)), 2) - pow((sin(A) - sin(B)), 2);
	z2 = -4 * pow(sin((A - B) / 2), 2)*cos(A + B);
	if (z1 == z2) cout << "z1 = z2";
	else cout << "z1 != z2";
	return 0;
}