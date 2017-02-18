//============================================================================
// Name        : Ex2.cpp
// Author      : Tiago Fragoso
// Version     :
// Copyright   : None
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

// EXERCÍCIO 2.1

// ??

// EXERCÍCIO 2.2

/*

int main() {
char type;
double n1, n2, n3;
cout << "Choose a, b or c: ";
cin >> type;
switch (type) {
case 'a':
cout << "Max and Min of 3 numbers" << endl;
break;
case 'b':
cout << "Sort 3 numbers" << endl;
break;
case 'c':
cout << "Triangle check" << endl;
break;
}
cout << "Number 1 ? ";
cin >> n1;
cout << "Number 2 ? ";
cin >> n2;
cout << "Number 3 ? ";
cin >> n3;
switch (type) {
case 'a':
if (n1 > n2 && n1 > n3) {
cout << "Max = " << n1 << endl;
if (n2 > n3){
cout << "Min = " << n3 << endl;
}
else {
cout << "Min = " << n2 << endl;
}
} else if (n2 > n1 && n2 > n3) {
cout << "Max = " << n2 << endl;
if (n1 > n3){
cout << "Min = " << n3 << endl;
}
else {
cout << "Min = " << n1 << endl;
}
} else {
cout << "Max = " << n3 << endl;
if (n2 > n1){
cout << "Min = " << n1 << endl;
}
else {
cout << "Min = " << n2 << endl;
}}
break;

case 'b':
if (n1 > n2 && n1 > n3) {
cout << n1 << " > ";
if (n2 > n3){
cout << n2 << " > " << n3 << endl;
}
else {
cout << n3 << " > " << n2 << endl;
}
} else if (n2 > n1 && n2 > n3) {
cout << n2 << " > ";
if (n1 > n3){
cout << n1 << " > " << n3 << endl;
}
else {
cout << n3 << " > " << n1 << endl;
}
} else {
cout << n3 << " > ";
if (n2 > n1){
cout << n2 << " > " << n1 << endl;
}
else {
cout << n1 << " > " << n2 << endl;
}}
break;

case 'c':
if (n1 > n2 && n1 > n3) {
if ((n2+n3) <= n1){
cout << "Not a triangle." << endl;
} else {
cout << "Valid triangle." << endl;
}
} else if (n2 > n1 && n2 > n3){
if ((n1+n3) <= n2){
cout << "Not a triangle." << endl;
} else {
cout << "Valid triangle." << endl;
}
} else {
if ((n1+n2) <= n3){
cout << "Not a triangle." << endl;
} else {
cout << "Valid triangle." << endl;
}
}
break;
}
return 0;
}

*/

// EXERCÍCIO 2.3

/*

int main(){
float op1, op2, result;
char operation;
cout << "Insert a 2-operand operation (*op1* *operation* *op2*) ? ";
cin >> op1 >> operation >> op2;
switch (operation){
case '+':
result = op1 + op2;
break;
case '-':
result = op1 - op2;
break;
case '*':
result = op1 * op2;
break;
case '/':
result = op1 / op2;
break;
}

cout << op1 << operation << op2 << " = " <<  result << endl;
return 0;
}

*/

// EXERCÍCIO 2.4

/*

int main(){
float w, price;
cout << "Weight of the package (g) ? ";
cin >> w;
if (w < 500){
price = 5;
} else if (w <= 1000) {
price = 5 + 1.5*ceil((w-500)/100);
} else {
price = 12.5 + 5*ceil((w-1000)/250);
}
cout << "The price is " << price << "€." << endl;
return 0;
}

*/

// EXERCÍCIO 2.5

/*

int main(){
float a, b, c, delta, r1, r2, real, complex;
cout  << "Introduza os coeficientes (a b c) : ";
cin >> a >> b >> c;
delta = pow(b, 2)-4*a*c;
cout << fixed << setprecision(3);
if (delta > 0){
r1 = (-b + sqrt(delta))/2*a;
r2 = (-b - sqrt(delta))/2*a;
cout << "A equação tem 2 raízes reais distintas: " << r1 << " e " << r2;
} else if (delta == 0){
r1 = -b/(2*a);
r2 = r1;
cout << "A equação tem 2 raízes reais iguais: " << r1 << " e " << r2;
} else {
real = -b/(2*a);
complex = sqrt(-delta)/(2*a);
cout << "A equaç\ao tem 2 raízes complexas conjugadas: " << real << "+"<< complex << "i e " << real << "-" << complex << "i";
}

return 0;
}

*/

// EXERCÍCIO 2.6

// ALINEA a)



int main() {
	int n, a;
	bool prime = true;
	cout << "Insert an integer: ";
	cin >> n;
	a = floor(sqrt(n));
	for (int i = 2; i <= a; i++) {
		if ((n % a) == 0) {
			prime = false;
			break;
		}
	}
	if (prime) {
		cout << n << " é primo." << endl;
	}
	else {
		cout << n << " não é primo." << endl;
	}
	return 0;
}


//ALÍNEA b)

/*

int main(){
int i = 1;
int n = 2;
while (i <= 100){
int a = floor(sqrt (n));
bool prime = true;
for (int x = 2; x <= a; x++){
if((n % x) == 0){
prime = false;
break;
}
}
if (prime) {
cout << n << " ";
i++;
}
n++;
}
return 0;
}

*/

//ALÍNEA c)

/*

int main(){
int n = 2;
while (n<= 1000){
int a = floor(sqrt (n));
bool prime = true;
for (int x = 2; x <= a; x++){
if((n % x) == 0){
prime = false;
break;
}
}
if (prime) {
cout << n << " ";
}
n++;
}
return 0;
}

*/

// EXERCÍCIO 2.7

/*

int main(){
float inf, sup, inc;
double pi = 3.14159265;
const std::streamsize oldp = cin.precision();
cout << "Insert limits and increment (inf sup increment): ";
cin >> inf >> sup >> inc;
for (inf; inf <= sup; inf += inc){
double n = inf*pi/180.0;
cout << inf << ": ";
cout << fixed << setprecision(6) << sin (n) << " " << cos(n) << " " << tan(n) << setprecision(0) << endl;
}
return 0;
}

*/

// EXERCÍCIO 2.8

/*

int main(){
float q, j;
int n;
cout << "BANK INTEREST CALCULATOR" << endl;
cout << "Amount Interest-rate(%) Time-span: ";
cin >> q >> j >> n;
for (int i = 1; i <= n; i++){
q *= 1 + (j/100.0);
}
cout << "Final balance = " << q <<"€" << endl;
return 0;
}

*/

// EXERCÍCIO 2.9

//ALÍNEA a)

/*

int main(){
float n, sum, avg, min, max;
int i = 0;
cin >> n;
max = n;
min = n;
while (n != 0){
sum += n;
i++;
if (n < min){
min = n;
} else if (n > max){
max = n;
}
cin >> n;
}
avg = sum / (float) i;
cout << "SUM = " << sum << endl;
cout << "AVG = " << avg << endl;
cout << "MIN = " << min << endl;
cout << "MAX = " << max << endl;
return 0;
}

*/

//ALÍNEA b)

/*

int main(){
float x, sum, avg, min, max;
int i = 1;
int n;
cout << "Insert size of series: ";
cin >> n;
cin >> x;
min = x;
max = x;
while (i < n){
sum += x;
if (x < min){
min = x;
} else if (x > max){
max = x;
}
i++;
cin >> x;
}
sum += x;
if (x < min){
min = x;
} else if (x > max){
max = x;
}
avg = sum/(float) n;
cout << "SUM = " << sum << endl;
cout << "AVG = " << avg << endl;
cout << "MIN = " << min << endl;
cout << "MAX = " << max << endl;
return 0;
}

*/

// ALÍNEA c)

// ???


// EXERCÍCIO 2.10

// ALÍNEA a)

int main() {
	int a;
	if ((a / 100) == (a % 100))
		return 0;
}

