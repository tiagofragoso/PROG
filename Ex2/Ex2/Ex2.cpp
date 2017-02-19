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
#include <string>
#include <ctime>
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

/*

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

*/

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

/*

int main() {
	int a;
	cout << "Insert an integer: ";
	cin >> a;
	if ((a / 100) == (a % 10)) {
		cout << a << " é capicua" << endl;
	}
	else {
		cout << a << " não é capicua" << endl;
	}
		return 0;
}

*/

	// ALÍNEA b)

/*

int main() {
	int a, b;
	bool capicua = true;
	cout << "Insert an integer: ";
	cin >> a;
	while (a > 10) {
		int length = 0;
		b = a;
		while (b /= 10) {
			length++;
		}
		int i = pow(10, length);

		if ((a / i) != (a % 10)) {
			capicua = false;
			break;
		}
		else {
			a %= i;
			a /= 10;
		}
	} ;

	if (capicua) {
		cout << "E capicua." << endl;
	}
	else {
		cout << "Nao e capicua." << endl;
	}
	return 0;
}

*/

// EXERCÍCIO 2.11

	// ALÍNEA a)

/*

int main() {
	int n;
	float sum = 0;
	cout << "Insert an integer: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		sum += pow(-1, i - 1) * (4.0 / (2 * i - 1));
	}
	cout << "SUM = " << sum << endl;
	return 0;
}

*/

	// ALÍNEA b)

/*

int main() {
	int n;
	float sum = 1;
	float last = 1;
	cout << "Insert an integer: ";
	cin >> n;
	for (int i = 1; i < n; i++) {
		last *= (1.0 / i);
		sum += last;
	}
	cout << "SUM = " << sum << endl;
	return 0;
}

*/

	// ALÍNEA c)

/*

int main() {
	int n;
	float x;
	float sum = 1;
	float last = 1;
	cout << "Insert an integer: ";
	cin >> x;
	cout << "Insert the number of elemnts: ";
	cin >> n;
	for (int i = 1; i < n; i++) {
		last *= (float)(x / i);
		sum += pow(-1, i - 1) * last;
	}
	cout << "SUM = " << sum << endl;
	return 0;
}

*/

// EXERCÍCIO 2.13

/*

int main() {
	int n;
	cout << "Insert an integer: ";
	cin >> n;
	string ans = to_string(n) + " = ";
	bool finished = false;
	while (!finished) {
		for (int i = 2; i <= n; i++) {
			if (n % i == 0) {
				ans += to_string(i);
				if (n != i) {
					ans += "x";
				}
				else {
					finished = true;
				}
				n /= i;
				break;
			}
		}
	} 
	cout << ans << endl; 
	return 0;
}

*/

// EXERCÍCIO 2.14

	// ALÍNEA a)

/*

int main() {
	int n, nMaxIter, i;
	double rq, rqn, rqn2, dif, delta;
	cout << "Insert 2 ints and a double: (n nNaxIter delta): ";
	cin >> n >> nMaxIter >> delta;
	rq = 1;
	i = 1;
	cout << fixed << setprecision(6);
	do {
		rqn = (rq + (n / rq)) / 2.0;
		rqn2 = pow(rqn, 2.0);
		dif = n - rqn2;
		cout << rq << " " << rqn << " " << rqn2 << " " << dif << endl;
		rq = rqn;
		i++;
	} while (abs(dif) > delta && i <= nMaxIter);
	return 0;
}

*/

	// ALÍNEA b)

/*

int main() {
	int n, nMaxIter, i, cnt;
	double rq, rqn, rqn2, dif, delta, delta_copy;
	cout << "Insert 2 ints and a double: (n nNaxIter delta): ";
	cin >> n >> nMaxIter >> delta;
	cnt = 0;
	delta_copy = delta - trunc(delta);
	rq = 1;
	i = 1;
	while (delta_copy != 0) {
		delta_copy *= 10;
		cnt++;
		delta_copy -= trunc(delta_copy);
	}

	cout << fixed << setprecision(cnt);
	do {
		rqn = (rq + (n / rq)) / 2.0;
		rqn2 = pow(rqn, 2.0);
		dif = n - rqn2;
		cout << rq << " " << rqn << " " << rqn2 << " " << dif << endl;
		rq = rqn;
		i++;
	} while (abs(dif) > delta && i <= nMaxIter);
	cout << "Value of sqrt(" << n << ") = " << sqrt(n) << endl;
	cout << "Estimated value(rq) = " << rq << endl;
	cout << "Delta (|sqrt - rq|) = " << abs(sqrt(n) - rq) << endl;
	return 0;
}

*/

// EXERCÍCIO 2.15

int main() {
	srand(time(NULL));
	int n1, n2, ans, correct_ans;
	n1 = (rand() % 7) + 2;
	n2 = (rand() % 7) + 2;
	correct_ans = n1*n2;
	cout << "Result of " << n1 << "x" << n2 << "= ";
	time_t begin = time(nullptr);
	cin >> ans;
	time_t end = time(nullptr);
	double time = double(end - begin);
	if (ans != correct_ans) {
		cout << "Muito mau!" << endl;
	}
	else if (ans == correct_ans) {
		if (time < 5) {
			cout << "Bom!" << endl;
		}
		else if (time <= 10) {
			cout << "Satisfaz." << endl;
		}
		else {
			cout << "Insuficiente." << endl;
		}
	}
	return 0;
}
