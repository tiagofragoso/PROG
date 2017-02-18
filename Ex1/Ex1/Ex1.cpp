//============================================================================
// Name        : Ex1.cpp
// Author      : Tiago Fragoso
// Version     :
// Copyright   : None
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

// EXERCÍCIO 1.1

/*

int main() {
cout << "Insert a character: ";
char letter;
cin >> letter; //store letter in the variable
cout << "ASCII Code of " << letter << " is " << (int) letter << "." << endl ;
return 0;
}

*/

// EXERCÍCIO 1.2

/*

int main(){
int a, b, c;
float avg, avg_a, avg_b, avg_c;
cout << "A ? ";
cin >> a;
cout << "B ? ";
cin >> b;
cout << "C ? ";
cin >> c;
avg = (a + b + c)/3.0;
avg_a = a-avg;
avg_b = b-avg;
avg_c = c-avg;
cout << fixed << setprecision(3);
cout << "Average = " << avg << endl;
cout << "A-Average = " << avg_a << endl;
cout << "B-Average = " << avg_b << endl;
cout << "C-Average = " << avg_c << endl;
return 0;
}

*/

// EXERCÍCIO 1.3

/*

int main(){
const float pi = 3.14159265354;
float mass, dens, radius;
cout << "Density ? (Kg/m^3) ";
cin >> dens;
cout << "Radius ? (m) ";
cin >> radius;
mass = (4/3)*dens*pi*pow(radius, 3.0);
cout << fixed << setprecision(3) << "Mass = " << mass << "Kg" << endl;
return 0;
}

*/

// EXERCÍCIO 1.4

/*

int main(){
float a, b, c, d, e, f, x, y;
cout << "LINEAR EQUATION SOLVER" << "\n" << "a*x + b*y = c" << "\n" << "d*x + e*y = f" << endl;
cout << "a ? ";
cin >> a;
cout << "b ? ";
cin >> b;
cout << "c ? ";
cin >> c;
cout << "d ? ";
cin >> d;
cout << "e ? ";
cin >> e;
cout << "f ? ";
cin >> f;
x = (c*e - b*f)/(a*e - b*d);
y = (a*f - c*d)/(a*e-b*d);
cout << fixed << setprecision(2);
cout << "x = " << x << endl;
cout << "y = " << y << endl;
return 0;
}

*/

//EXERCÍCIO 1.5


int main() {
	int h1, h2, ht, m1, m2, mt, s1, s2, st, dt, sum;
	cout << "Time 1 (hours minutes seconds) ? ";
	cin >> h1 >> m1 >> s1;
	cout << "Time 2 (hours minutes seconds) ? ";
	cin >> h2 >> m2 >> s2;
	sum = 3600 * (h1 + h2) + 60 * (m1 + m2) + s1 + s2;
	dt = floor(sum / 86400);
	sum %= 86400;
	ht = floor(sum / 3600);
	sum %= 3600;
	mt = floor(sum / 60);
	sum %= 60;
	st = sum;
	cout << "Sum of times: " << dt << " day(s), " << ht << " hour(s), " << mt << " minute(s) and " << st << " second(s)." << endl;
	return 0;
}



// EXERCÍCIO 1.6

/*

int main(){
float x1, y1, x2, y2, x3, y3, s, a, b, c, area;
cout << "TRIANGLE AREA CALCULATOR" << endl;
cout << "V1 (x1 y1) ? ";
cin >> x1 >> y1;
cout << "V2 (x2 y2) ? ";
cin >> x2 >> y2;
cout << "V3 (x3 y3) ? ";
cin >> x3 >> y3;
a = sqrt (pow(x2-x1, 2) + pow(y2-y1, 2));
b = sqrt (pow(x3-x1, 2) + pow(y3-y1, 2));
c = sqrt (pow(x3-x2, 2) + pow(y3-y2, 2));
s = (a+b+c)/2;
area = sqrt(s*(s-a)*(s-b)*(s-c));
cout << fixed << setprecision(2) <<"Area = " << area;
return 0;
}

*/
